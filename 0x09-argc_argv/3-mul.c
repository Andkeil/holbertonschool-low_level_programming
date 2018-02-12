#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		val *= atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
