#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found and 1 otherwise
 */

int is_digit(char *s)
{
	int e = 0;

	while (s[e])
	{
		if (s[e] < '0' || s[e] > '9')
			return (0);
		e++;
	}
	return (1);

}

/**
 * _strlen - Returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	{
		e++;
	}
	return (e);

}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);

}

/**
 * main - multiplies two positive numbers
 * @bc: number of arguments]
 * @dg: array of arguments
 *
 * Return: always 0
 */

int main(int bc, char *dg[])
{
	char *x, *y;
	int k, p, w, e, c, v, z, *result, u = 0;

	x = dg[1], y = dg[2];
	if (bc != 3 || !is_digit(x) || !is_digit(y))
		errors();
	k = _strlen(x);
	p = _strlen(y);
	w = k + p + 1;
	result = malloc(sizeof(int) * w);
	if (!result)
		return (1);
	for (e = 0; e <= k + p; e++)
		result[e] = 0;
	for (k = k - 1; k >= 0; k--)
	{
		v = x[k] - '0';
		c = 0;
		for (p = _strlen(y) - 1; p >= 0; p--)
		{
			z = y[p] - '0';
			c += result[k + p + 1] + (v * z);
			result[k + p + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[k + p + 1] += c;
	}
	for (e = 0; e < w - 1; e++)
	{
		if (result[e])
			u = 1;
		if (u)
			_putchar(result[e] + '0');
	}
	if (!u)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
