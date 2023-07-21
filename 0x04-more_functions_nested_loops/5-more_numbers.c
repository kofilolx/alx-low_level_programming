#include <stdio.h>
#include "main.h"

/**
 *more_numbers - Prints numbers from 0 to 14 10 times.
 *
 * Description: Uses putchar to print numbers from 0 to 14 in a loop.
 *
 * Return: void
 */
int more_numbers(void)
{
	int i = 0;
	int x;

	for (x = 0; x < 10; x++)
	{
		while (i < 15)
		{
			if (i > 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
	}
}
