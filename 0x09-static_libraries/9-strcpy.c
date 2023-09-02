#include "main.h"

/**
 *char *_strcpy - A function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int si = 0;
	int hi = 0;

	while (*(src + si) != '\0')
	{
		si++;
	}
	for ( ; hi < si ; hi++)
	{
		dest[hi] = src[hi];
	}
	dest[si] = '\0';
	return (dest);

}
