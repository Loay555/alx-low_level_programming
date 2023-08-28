#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 *
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int rer;
	int gta;

	for (rer = 0; rer < 8; rer++)
	{
		for (gta = 0; gta < 8; gta++)
			_putchar(a[rer][gta]);
		_putchar('\n');

	}
}
