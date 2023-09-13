#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations
 * @t: the number of arguments supplied to the program
 * @u: an array of pointers to the arguments
 *
 * Return: always 0
 */

int main(int __attribute__((__unused__)) t, char *u[])
{
  int v, s;
  char *e;

  if (t != 4)
    {
      printf("Error\n");
      exit(98);
    }
  v = atoi(u[1]);
  e = u[2];
  s = atoi(u[3]);

  if (get_e_func(e) == NULL || e[1] != '\0')
    {
      printf("Error\n");
      exit(99);
    }
  if ((*e == '/' && s == 0) ||
      (*e == '%' && s == 0))
    {
      printf("Error\n");
      exit(100);
    }
  printf("%d\n", get_e_func(e)(v, s));
  return (0);

}
