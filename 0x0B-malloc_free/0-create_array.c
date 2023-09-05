#include "main.h"
#include <stdlib.h>

/**
 *create_array - Create array of size size and assign char c
 *@size: size of array
 *@c: char to assign
 *Description: create array of size size and assign char c
 *Return: pointer to array and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int honey;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (honey = 0; honey < size; honey++)
		str[honey] = c;
	return (str);

}
