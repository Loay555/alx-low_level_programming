#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int she = 0;
	int he;

	while (*s)
	{
		for (he = 0; accept[he]; he++)
		{
			if (*s == accept[he])
			{
				she++;
				break;
			}
			else if (accept[he + 1] == '\0')
				return (she);
		}
		s++;
	}
	return (she);

}
