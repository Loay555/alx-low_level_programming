#include "main.h"

/**
 * _strncat - Concatenate 2 strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int yes;
	int no;

	yes = 0;
	while (dest[yes] != '\0')
	{
		yes++;
	}
	no = 0;
	while (no < n && src[no] != '\0')
	{
	dest[yes] = src[no];
	yes++;
	no++;
	}
	dest[yes] = '\0';
	return (dest);

}
