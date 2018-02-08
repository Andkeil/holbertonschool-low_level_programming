#include "holberton.h"

/**
 * _sqrt_recursion - get natural root of number
 *
 * @n: number to root
 *
 * Return: natural root or -1
 */

int _sqrt_recursion(int n)
{
	return (recursive_root(n, 1));
}

/**
 * recursive_root - get natural root of number
 *
 * @n: number to root
 * @i: increment
 *
 * Return: int
 */

int recursive_root(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recursive_root(n, i + 1));

}
