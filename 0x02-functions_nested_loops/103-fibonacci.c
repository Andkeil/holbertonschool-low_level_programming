#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - fib even sums
 *
 * Return: (0) always
 */

int main(void)
{
	long int i, j, k = 0, a = 1, sum = 0;

	for (i = 0; i <= 51; i++)
	{
		if (i <= 1)
			j = i;
		else
		{
			j = k + a;
			k = a;
			a = j;
			if (j % 2 == 0)
			{
				sum += j;
			}
		}
	}
	printf("%li\n", j);
	return (0);
}
