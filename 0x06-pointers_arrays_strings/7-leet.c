#include "main.h"
/**
 * leet - Encode into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int w, x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (w = 0; n[w] != '\0'; w++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[w] == s1[x])
			{
				n[w] = s2[x];
			}
		}
	}
	return (n);

}
