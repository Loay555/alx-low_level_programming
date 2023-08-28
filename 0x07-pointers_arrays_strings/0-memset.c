#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value
 * @s: fill the starting address of memory
 * @b: desired value
 * @n: change the number of bytes
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);

}
