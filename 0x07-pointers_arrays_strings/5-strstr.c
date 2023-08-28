#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *c = needle;

		while (*d == *c && *c != '\0')
		{
			d++;
			c++;
		}
		if (*c == '\0')
			return (haystack);
	}
	return (0);

}
