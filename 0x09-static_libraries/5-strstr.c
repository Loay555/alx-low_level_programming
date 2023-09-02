#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *e = needle;

		while (*a == *e && *e != '\0')
		{
			a++;
			e++;
		}
		if (*e == '\0')
			return (haystack);
	}
	return (0);

}
