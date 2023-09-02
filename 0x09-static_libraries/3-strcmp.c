#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[we] - s2[we]
 */

int _strcmp(char *s1, char *s2)
{
	int we;

	we = 0;
	while (s1[we] != '\0' && s2[we] != '\0')
	{
		if (s1[we] != s2[we])
		{
			return (s1[we] - s2[we]);
		}
	we++;
	}
	return (0);

}
