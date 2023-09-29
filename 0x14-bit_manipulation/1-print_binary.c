#include "main.h"

/**
 *print_binary - Prints the binary equivalent of a decimal number
 *@n: number to print in binary
 */

void print_binary(unsigned long int n)
{
  int e, m = 0;
  unsigned long int n;

  for (e = 63; e >= 0; e--)
    {
      n = n >> e;
      if (n & 1)
	{
	  _putchar('1');
	  m++;
	}
      else if (m)
	_putchar('0');
    }
  if (!m)
    _putchar('0');

}
