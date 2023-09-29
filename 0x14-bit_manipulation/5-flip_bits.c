#include "main.h"

/**
 *flip_bits - Counts the number of bits to change
 *to get from one number to another
 *@n: 1st number
 *@m: 2nd number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  int k, d = 0;
  unsigned long int h;
  unsigned long int p = n ^ m;

  for (k = 63; k >= 0; k--)
    {
      h = p >> k;
      if (h & 1)
	d++;
    }
  return (d);

}
