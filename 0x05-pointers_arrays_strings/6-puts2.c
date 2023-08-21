#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int honey = 0;
	int v = 0;
	char *y = str;
	int e;

	while (*y != '\0')
	{
		y++;
		honey++;
	}
	v = honey - 1;
	for (e = 0 ; e <= v ; e++)
	{
		if (e % 2 == 0)
	{
		_putchar(str[e]);
	}
	}
	_putchar('\n');
}
