#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int good = 0, great = 0, sad = 0, sado = 0;

	while (s1 && s1[sad])
		sad++;
	while (s2 && s2[sado])
		sado++;
	if (n < sado)
		r = malloc(sizeof(char) * (sad + n + 1));
	else
		r = malloc(sizeof(char) * (sad + sado + 1));
	if (!r)
		return (NULL);
	while (good < sad)
	{
		r[good] = s1[good];
		good++;
	}
	while (n < sado && good < (sad + n))
		r[good++] = s2[great++];
	while (n >= sado && good < (sad + sado))
		r[good++] = s2[great++];
	r[good] = '\0';
	return (r);

}
