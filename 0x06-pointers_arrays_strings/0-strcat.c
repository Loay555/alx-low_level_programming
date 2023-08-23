#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int u;
	int p;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[u] = src[p];

		u++;

		p++;
	}
	dest[u] = '\0';
	return (dest);
}
