#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Main entry
 *@ac: int input
 *@av: double pointer array
 *Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int much, many, x = 0, y = 0;
	char *free;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (much = 0; much < ac; much++)
	{
		for (many = 0; av[much][many]; many++)
			y++;
	}
	y += ac;

	free = malloc(sizeof(char) * y + 1);
	if (free == NULL)
		return (NULL);
	for (much = 0; much < ac; much++)
	{
	for (many = 0; av[much][many]; many++)
	{
		free[x] = av[much][many];
		x++;
	}
	if (free[x] == '\0')
	{
		free[x++] = '\many';
	}
	}
	return (free);

}
