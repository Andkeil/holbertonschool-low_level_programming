#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function for ops
 *
 * @argc: # of args
 * @argv: array of args
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int val;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", val);
	return (0);
}
