#include “main.h”
#include <stdlib.h>

/**
 * *_memset - Fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		s[e] = b;
	}
	return (s);

}

/**
 * *_calloc - Allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(size * nmemb);
	if (k == NULL)
		return (NULL);

	_memset(k, 0, nmemb * size);
	return (k);

}
