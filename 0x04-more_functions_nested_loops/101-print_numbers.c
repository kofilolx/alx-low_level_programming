#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* prototype function */
int _putchar(char c);

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void print_number(int n)
{

	unsigned int num = 0;

	if  (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}


	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
