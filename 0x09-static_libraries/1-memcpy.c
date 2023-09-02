#include "main.h"

/**
 *_memcpy - A function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int leg = 0;
	int arm = n;

	for (; leg < arm; leg++)
	{
		dest[leg] = src[leg];
		n--;
	}
	return (dest);

}
