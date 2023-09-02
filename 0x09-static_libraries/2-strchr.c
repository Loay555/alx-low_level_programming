#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int you = 0;

	for (; s[you] >= '\0'; you++)
	{
		if (s[you] == c)
			return (&s[you]);
	}
	return (0);

}
