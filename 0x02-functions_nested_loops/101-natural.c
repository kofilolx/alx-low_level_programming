#include <stdio.h>

/**
 * main - _Natural number prints the sum of all the multiples of 3 or 5 to 1023
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
