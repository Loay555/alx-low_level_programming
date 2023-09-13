#include "3-calc.h"

int op_add(int d, int e);
int op_sub(int d, int e);
int op_mul(int d, int e);
int op_div(int d, int e);
int op_mod(int d, int e);

/**
 * op_add - Returns the sum of 2 numbers
 * @d: the 1st number
 * @e: the 2nd number
 *
 * Return: the sum of d and e
 */

int op_add(int d, int e)
{
  return (d + e);
}

/**
 * op_sub - Returns the difference of 2 numbers
 * @d: the 1st number
 * @e: the 2nd number
 *
 * Return: the difference of d and e
 */

int op_sub(int d, int e)
{
  return (d - e);
}

/**
 * op_mul - Returns the product of 2 numbers
 * @d: the 1st number
 * @e: the 2nd number
 *
 * Return: The product of d and e
 */

int op_mul(int d, int e)
{
  return (d * e);
}

/**
 * op_div - Returns the division of 2 numbers
 * @d: the 1st number
 * @e: the 2nd number
 *
 * Return: the quotient of d and e
 */

int op_div(int d, int e)
{
  return (d / e);
}

/**
 * op_mod - Returns the remainder of the division of 2 numbers
 * @d: the 1st number
 * @e: the 2nd number
 *
 * Return: the remainder of the division of d by e
 */

int op_mod(int d, int e)
{
  return (d % e);

}
