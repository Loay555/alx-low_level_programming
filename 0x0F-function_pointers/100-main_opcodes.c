#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints it’s own opcodes
 * @m: number of arguments
 * @n: array of arguments
 *
 * Return: Always 0
 */

int main(int m, char *n[])
{
  int p, q;
  char *w;

  if (m != 2)
    {
      printf("Error\n");
      exit(1);
    }
  p = atoi(n[1]);

  if (p < 0)
    {
      printf("Error\n");
      exit(2);
    }
  w = (char *)main;

  for (q = 0; q < p; q++)
    {
      if (q == p - 1)
	{
	  printf("%02hhx\n", w[q]);
	  break;

	}
      printf("%02hhx ", w[q]);
    }
  return (0);

}
