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
	char *conct;
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
	conct = malloc(sizeof(char) * (w + e + 1));
	if (conct == NULL)
		return (NULL);
	w = e = 0;
	while (s1[w] != '\0')
	{
		conct[w] = s1[w];
		w++;
	}
	while (s2[e] != '\0')
	{
		conct[w] = s2[e];
		w++, e++;
	}
	conct[w] = '\0';
	return (conct);

}
