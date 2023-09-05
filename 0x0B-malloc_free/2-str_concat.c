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
	int web, site;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		web = site = 0;
	while (s1[web] != '\0')
		web++;
	while (s2[site] != '\0')
		site++;
	conct = malloc(sizeof(char) * (web + site + 1));
	if (conct == NULL)
		return (NULL);
	web = site = 0;
	while (s1[web] != '\0')
	{
		conct[web] = s1[web];
		web++;
	}
	while (s2[site] != '\0')
	{
		conct[web] = s2[site];
		web++, site++;
	}
	conct[web] = '\0';
	return (conct);

}
