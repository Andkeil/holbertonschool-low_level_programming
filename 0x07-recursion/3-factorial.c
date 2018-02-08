#include "holberton.h"

/**
 * factorial - get factorial of number
 *
 * @n: number for factorial
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
