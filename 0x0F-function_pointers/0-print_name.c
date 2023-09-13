#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: no thing
 **/

void print_name(char *name, void (*f)(char *))
{
  if (name == NULL || f == NULL)
    return;
  f(name);

}
