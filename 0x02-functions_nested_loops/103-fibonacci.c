#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prevFib = 0, currFib = 1, nextFib;
	unsigned long int sumEvenFib = 0;

	while (currFib <= 4000000)
	{
		if (currFib % 2 == 0)
			sumEvenFib += currFib;

		nextFib = prevFib + currFib;
		prevFib = currFib;
		currFib = nextFib;
	}

	printf("%ld\n", sumEvenFib);

	return (0);
}
