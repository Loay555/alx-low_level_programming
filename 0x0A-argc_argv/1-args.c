#include "main.h"
#include <stdio.h>

/**
 * main - Print the number of arguments passed to the program
 *@v: number of arguments
 *@e: array of arguments
 *
 *Return: Always 0
 */

int main(int v, char *e[])

{
(void) e; /*Ignore e*/
	printf("%d\n", v - 1);
	return (0);

}
