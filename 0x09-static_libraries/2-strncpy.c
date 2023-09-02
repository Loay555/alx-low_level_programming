#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int hand;

	hand = 0;
	while (hand < n && src[hand] != '\0')
	{
		dest[hand] = src[hand];
		hand++;
	}
	while (hand < n)
	{
		dest[hand] = '\0';
		hand++;
	}
	return (dest);
}
