#include "main.h"

/**
* print_numbers - Print all single digit numbers
*
* Description: Print numbers from 0 to 9  using only putchar
*
* Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
