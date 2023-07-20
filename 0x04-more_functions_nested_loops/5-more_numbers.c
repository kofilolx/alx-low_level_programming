#include "main.h"

/**
 * main - Prints numbers from 0 to 14 ten times.
 *
 * Description: Uses putchar to print numbers from 0 to 14 in a loop.
 *
 * Return: void
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
				_putchar(j % 10 + '0');
			j++;
		}
	}
	_putchar('\n');
}
