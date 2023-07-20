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
	int i = 0;
	int x;

	for (x = 0; x < 10; x++)
	{
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}
