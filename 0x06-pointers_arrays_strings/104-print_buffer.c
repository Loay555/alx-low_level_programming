#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int hello, every, body;

	hello = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (hello < size)
	{
		every = size - hello < 10 ? size - hello : 10;
		printf("%08x: ", hello);
		for (body = 0; body < 10; body++)
		{
			if (body < every)
				printf("%02x", *(b + hello + body));
			else
				printf("  ");
			if (body % 2)
			{
				printf(" ");
			}
		}
		for (body = 0; body < every; body++)
		{
			int c = *(b + hello + body);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");

		hello += 10;
	}
}
