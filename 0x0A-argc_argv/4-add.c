#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - Check - string there are digit
 *@r: array str
 *
 *Return: Always 0
 */
int check_num(char *r)
{
	/*Declaring variables*/
	unsigned int number;

	number = 0;

	while (number < strlen(r)) /*number string*/
	{
		if (!isdigit(r[number])) /*check if r there are digit*/
		{
			return (0);
		}
		number++;
	}
	return (1);
}

/**
 *main - Print the name of the program
 *@m: number of arguments
 *@n: arguments
 *
 *Return: Always 0
 */

int main(int m, char *n[])

{
	/*Declaring variables*/
	int number;
	int r_to_int;
	int pluse = 0;

	number = 1;

	while (number < m) /*Goes through the whole array*/
	{
		if (check_num(n[number]))
		{
			r_to_int = atoi(n[number]); /*ATOI --> convert string to int*/
			pluse += r_to_int;
		}
		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		number++;
	}
	printf("%d\n", pluse); /*print pluse*/
	return (0);
}
