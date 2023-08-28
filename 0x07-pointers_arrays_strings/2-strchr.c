#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int dude = 0;

	for (; s[dude] >= '\0'; dude++)
	{
		if (s[dude] == c)
			return (&s[dude]);
	}
	return (0);

}
