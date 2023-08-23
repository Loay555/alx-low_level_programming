#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int e;
	int k;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[e] = src[k];
		e++;
		k++;
	}

	dest[e] = '\0';
	return (dest);
}
