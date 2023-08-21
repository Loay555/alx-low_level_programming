#include "main.h"

/**
 * _atoi - takes a string and converts it to an integer
 * @str: input string
 *
 * Return: the integer of the string
 */
int _atoi(char *str)
{
	int m, b, t, size, y, number;

	m = 0;
	b = 0;
	t = 0;
	size = 0;
	y = 0;
	number = 0;

	while (str[size] != '\0')
		size++;

	while (m < size && y == 0)
	{
		if (str[m] == '-')
			++b;

		if (str[m] >= '0' && str[m] <= '9')
		{
			number = str[m] - '0';
			if (b % 2)
				number = -number;
			t = t * 10 + number;
			y = 1;
			if (str[m + 1] < '0' || str[m + 1] > '9')
				break;
			y = 0;
		}
		m++;
	}

	if (y == 0)
		return (0);

	return (t);
}
