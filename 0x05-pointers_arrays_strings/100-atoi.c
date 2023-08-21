#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int b, e, n, fine, c, number;

	b = 0;
	e = 0;
	n = 0;
	fine = 0;
	c = 0;
	number = 0;

	while (s[fine] != '\0')
		fine++;

	while (b < fine && c == 0)
	{
		if (s[b] == '-')
			++d;

		if (s[b] >= '0' && s[b] <= '9')
		{
			number = s[b] - '0';
			if (e % 2)
				number = -number;
			n = n * 10 + number;
			c = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			c = 0;
		}
		b++;
	}

	if (c == 0)
		return (0);

	return (n);
}
