#include "main.h"

/**
 * print_number - prints an integer
 * @n: argument that takes integer input
 *
 * Return: Always 0 (success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n < -9)
			print_number(n / -10);
		_putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
