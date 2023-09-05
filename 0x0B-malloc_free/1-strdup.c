#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Duplicate to new memory space location
 *@str: char
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *d;
	int coca, cola = 0;

	if (str == NULL)
		return (NULL);
	coca = 0;
	while (str[coca] != '\0')
		coca++;
	d = malloc(sizeof(char) * (coca + 1));

	if (d == NULL)
		return (NULL);
	for (cola = 0; str[cola]; cola++)
		d[cola] = str[cola];
	return (d);

}
