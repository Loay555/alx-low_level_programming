#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Prints the minimum number of coin
 *to make change for an amount of money
 *@p: number of arguments
 *@z: array of arguments
 *
 *Return: 0 on Success 1 on Error
 */

int main(int p, char *z[])
{
	int g, e, t;
	int vibe[] = {25, 10, 5, 2, 1};

	if (p != 2)
	{
		printf("Error\n");
		return (1);
	}
	g = atoi(z[1]);
	t = 0;
	if (g < 0)
	{
		printf("0\n");
		return (0);
	}
	for (e = 0; e < 5 && g >= 0; e++)
	{
		while (g >= vibe[e])
		{
			t++;
			g -= vibe[e];
		}
	}
	printf("%d\n", t);
	return (0);
}
