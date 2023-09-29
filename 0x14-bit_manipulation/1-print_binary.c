#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
  int e, k = 0;
  unsigned long int b;

  for (e = 63; e >= 0; e--)
    {
      b = n >> e;

      if (b & 1)
	{
	  _putchar('1');
	  k++;
	}
      else if (k)
	_putchar('0');
    }
  if (!k)
    _putchar('0');

}
