#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int z, extra, w;

	extra = 0;	

	srand(time(NULL));

	for (z = 0; z < 100; z++)
	{
		pass[z] = rand() % 78;
		extra += (pass[z] + '0');
		putchar(pass[z] + '0');
		if ((2772 - extra) - '0' < 78)
		{
			w = 2772 - extra - '0';
			extra += w;
			putchar(w + '0');
			break;
		}
	}

	return (0);
}
