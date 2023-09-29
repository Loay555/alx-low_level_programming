#include "main.h"

/**
 *binary_to_uint - Converts a binary number to unsigned int
 *@b: string containing the binary number
 *
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
  int a;
  unsigned int e = 0;

  if (!b)
    return (0);
  for (a = 0; b[a]; a++)
    {
      if (b[a] < '0' || b[a] > '1')
	return (0);
      e = 2 * e + (b[a] - '0');
    }
  return (e);

}
