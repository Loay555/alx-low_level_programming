#include "main.h"

/**
 *_strcat - Concatenates 2 strings
 *@dest: input value
 *@src: input value
 *
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
	int right;
	int left;

	right = 0;
	while (dest[right] != '\0')
	{
		right++;
	}
	left = 0;
	while (src[left] != '\0')
	{
		dest[right] = src[left];
		right++;
		left++;
	}
	dest[right] = '\0';
	return (dest);

}
