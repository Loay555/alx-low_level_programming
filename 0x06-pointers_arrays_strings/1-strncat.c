#include "main.h"
/**
 * _strncat - concatenate 2 strings using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int y;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[z] = src[y];
	z++;
	y++;
	}
	dest[z] = '\0';
	return (dest);
}
