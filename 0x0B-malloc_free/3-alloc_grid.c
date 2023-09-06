#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Nested loop to make grid
 *@width: width input
 *@height: height input
 *Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **e;
	int g, u;

	if (width <= 0 || height <= 0)
		return (NULL);
	e = malloc(sizeof(int *) * height);
	if (e == NULL)
		return (NULL);
	for (g = 0; g < height; g++)
	{
		e[g] = malloc(sizeof(int) * width);
		if (e[g] == NULL)
		{
			for (; g >= 0; g--)
				free(e[g]);
			free(e);
			return (NULL);
		}
	}
	for (g = 0; g < height; g++)
	{
		for (u = 0; u < width; u++)
			e[g][u] = 0;
	}
	return (e);

}
