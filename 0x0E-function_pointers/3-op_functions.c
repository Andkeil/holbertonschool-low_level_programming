#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
