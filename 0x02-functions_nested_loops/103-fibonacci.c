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
	int i;
	unsigned long int j, k = 0, a = 1, sum = 0;

	for (i = 0; i < 100; i++)
	{
		j = k + a;
		k = a;
		a = j;
		if (j % 2 == 0 && sum < 4000000)
		{
			sum += j;
		}
	}
	printf("%li\n", sum);
	return (0);
}
