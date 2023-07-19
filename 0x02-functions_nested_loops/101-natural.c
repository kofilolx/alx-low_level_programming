#include <stdio.h>

/**
 * main - _Natural number prints the sum of all the multiples of 3 or 5 to 1023
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	int j;
	int sum = 0;

	for (j = 0; j <= 1023; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
