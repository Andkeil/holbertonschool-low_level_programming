#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */
int main(void)
{
	long int prime, num;

	prime = 2;
	num = 612852475143;

	while (num > prime)
		if (num % prime == 0)
			num = num / prime;
		else
			prime++;
	printf("%ld\n", prime);
	return (0);
}
