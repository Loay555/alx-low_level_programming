#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int q, s, very;

	very = 0;

	for (q = 0; str[q] != '\0'; q++)
		very++;

	s = (very / 2);

	if ((very % 2) == 1)
		s = ((very + 1) / 2);

	for (q = s; str[q] != '\0'; q++)
		_putchar(str[q]);
	_putchar('\n');
}
