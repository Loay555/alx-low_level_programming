#include "main.h"
#include <stdio.h>

/**
 *_atoi - Converts a string to an integer
 *@s: string to be converted
 *
 *Return: the int converted from the string
 */

int _atoi(char *s)
{
	int less, more, n, he, she, web;

	less = 0;
	more = 0;
	n = 0;
	he = 0;
	she = 0;
	web = 0;

	while (s[he] != '\0')
		he++;
	while (less < he && she == 0)
	{
		if (s[less] == '-')
			++more;
		if (s[less] >= '0' && s[less] <= '9')
		{
			web = s[less] - '0';
			if (more % 2)
				web = -web;
			n = n * 10 + web;
			she = 1;
			if (s[less + 1] < '0' || s[less + 1] > '9')
				break;
			she = 0;
		}
		less++;
	}
	if (she == 0)
		return (0);
	return (n);
}

/**
 * main - Multiplies 2 numbers
 *@y: number of arguments
 *@z: array of arguments
 *
 *Return: 0 on Success and 1 on Error
 */

int main(int y, char *z[])

{

	int p, k, r;

	if (y < 3 || y > 3)
	{
		printf("Error\n");
		return (1);
	}
	k = _atoi(z[1]);
	r = _atoi(z[2]);
	p = k * r;
	printf("%d\n", p);
	return (0);
}
