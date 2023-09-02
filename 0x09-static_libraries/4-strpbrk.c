#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int qe;


	while (*s)
	{
		for (qe = 0; accept[qe]; qe++)
		{
		if (*s == accept[qe])
		return (s);
		}
	s++;
	}


return ('\0');

}
