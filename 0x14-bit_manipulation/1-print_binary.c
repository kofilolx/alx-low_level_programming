#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int input
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}
