#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int rain;

		while (*s)
		{
			for (rain = 0; accept[rain]; rain++)
			{
			if (*s == accept[rain])
			return (s);
			}
		s++;
		}
	return ('\0');

}
