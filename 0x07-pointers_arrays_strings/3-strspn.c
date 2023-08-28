#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 *
 * Return: always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				z++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (z);
		}
		s++;
	}
	return (z);

}
