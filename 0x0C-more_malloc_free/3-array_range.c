#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *e;
	int q, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	e = malloc(sizeof(int) * size);

	if (e == NULL)
		return (NULL);
	for (q = 0; min <= max; q++)
		e[q] = min++;
	return (e);

}
