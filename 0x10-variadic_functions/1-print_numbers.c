#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list nums;
  unsigned int g;
  va_start(nums, n);

  for (g = 0; g < n; g++)
    {
      printf("%d", va_arg(nums, int));

      if (g != (n - 1) && separator != NULL)
	printf("%s", separator);
    }
  printf("\n");
  va_end(nums);

}
