#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Get ends of input and add together for size
 *@s1: input number 1 to concat
 *@s2: input number 2 to concat
 *Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *doc;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	doc = malloc(sizeof(char) * (a + b + 1));

	if (doc == NULL)
		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
		doc[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		doc[a] = s2[b];
		a++, b++;
	}
	doc[a] = '\0';
	return (doc);

}
