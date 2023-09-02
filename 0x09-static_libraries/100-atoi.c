#include "main.h"

/**
 *_atoi - Convert a string into an integer.
 *
 *@s: the string to use.
 *
 *Return: integer.
 */

int _atoi(char *s)
{
	int w = 1, one = 0;
	unsigned int x = 0;

	while (!(s[one] <= '9' && s[one] >= '0') && s[one] != '\0')
	{
		if (s[one] == '-')
			w *= -1;
		one++;
	}
	while (s[one] <= '9' && (s[one] >= '0' && s[one] != '\0'))
	{
		x = (x * 10) + (s[one] - '0');
		one++;
	}
	x *= w;
	return (x);

}
