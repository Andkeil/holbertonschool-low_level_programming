#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - first 50 fib numbers
 *
 * Return: (0) always
 */

int main(void)
{
	long int i, j, k = 0, a = 1;

	for (i = 0; i <= 51; i++)
	{
		if (i <= 1)
			j = i;
		else
		{
			j = k + a;
			k = a;
			a = j;
			printf("%li", j);
			if (i != 51)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
