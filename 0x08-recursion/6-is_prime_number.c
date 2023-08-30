#include "main.h"

int actual_prime(int n, int d);
/**
 * is_prime_number - Says if the integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));

}
/**
 * actual_prime - Calculates if a number is prime recursively
 * @n: number to evaluate
 * @d: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0 && d > 0)
		return (0);
	return (actual_prime(n, d - 1));

}
