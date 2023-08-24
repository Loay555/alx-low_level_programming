#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int green;
	int land;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (green = 0; s[green] != '\0'; green++)
	{
		for (land = 0; land < 52; land++)
		{
			if (s[green] == data1[land])
			{
				s[green] = datarot[land];
				break;

			}
		}
	}
	return (s);
}
