#include "main.h"

/**
 *_memcpy - A function which copies memory area
 *@dest: where the memory is stored
 *@src: where the memory is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int tea = 0;
	int sugar = n;

	for (; tea < sugar; tea++)
	{
		dest[tea] = src[tea];
		n--;
	}
	return (dest);

}
