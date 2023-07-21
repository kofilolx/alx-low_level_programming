#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor
 *
 * Return: Always 0 Sucess
 */
int main(void)
{
	int i;
	long num_fac = 612852475143;

	for (i = (int) sqrt(num_fac); i > 2; i++)
	{
		if (num_fac % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
