#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char real = s[0];
	int perfect = 0;
	int t;

	while (s[perfect] != '\0')
	perfect++;
	for (t = 0; t < perfect; t++)
	{
		perfect--;
		real = s[t];
		s[t] = s[perfect];
		s[perfect] = real;
	}
}
