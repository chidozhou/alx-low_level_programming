#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - say if an int is a prime no or not
 * @n: no to evaluate
 *
 * Return: 1 if n is a prime no, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculates if a no is prime recursively
 * @n: the no to evaluate
 * @i: the iterator
 *
 * Return: 1 if no is prime, 0 if otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

