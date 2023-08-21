#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < (n - 1); w++)
	{
		printf("%d, ", a[w]);
	}
		if (w == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
