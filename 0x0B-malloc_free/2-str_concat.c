#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Get ends of input and add together for size
 *@s1: input 1 to concat
 *@s2: input 2 to concat
 *Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *doc;
	int w, e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = e = 0;
	while (s1[w] != '\0')
		w++;
	while (s2[e] != '\0')
		e++;
	doc = malloc(sizeof(char) * (w + e + 1));
	if (doc == NULL)
		return (NULL);
	w = e = 0;
	while (s1[w] != '\0')
	{
		doc[w] = s1[w];
		w++;
	}
	while (s2[e] != '\0')
	{
		doc[w] = s2[e];
		w++, e++;
	}
	doc[w] = '\0';
	return (doc);

}
