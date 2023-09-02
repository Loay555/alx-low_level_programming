#include "main.h"
#include <stdio.h>

/**
 *main - Prints all arguments it receives
 *@c: number of arguments
 *@v: array of arguments
 *
 *Return: Always 0
 */

int main(int c, char *v[])

{
	int w;

	for (w = 0; w < c; w++)
	{
		printf("%s\n", v[w]);
	}
	return (0);

}
