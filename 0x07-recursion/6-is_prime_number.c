#include "holberton.h"

int prime(int n, int i);
/**
 * is_prime_number - check if number is prime
 *
 * @n: number to check
 *
 * Return: 1 for prime 0 for other
 */

int is_prime_number(int n)
{
	if (n == -1 || n == 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - helper to find prime
 *
 * @n: number to check
 * @i: incrementer
 *
 * Return: int
 */

int prime(int n, int i)
{
	if (i == n)
		return (1);
	if ((n % i) != 0)
		return (prime(n, i + 1));
	else
		return (0);
}
