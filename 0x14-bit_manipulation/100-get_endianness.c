#include "main.h"

/**
 *get_endianness - Checks if a machine is little or big endian
 *Return: 0 on big and 1 for little
 */

int get_endianness(void)
{
  unsigned int e = 1;
  char *c = (char *) &e;
  return (*c);

}
