#include "main.h"

/**
 * print_number - prints an integer
 * @n: argument that takes integer input
 *
 * Return: Always 0 (success)
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		if (n < -9)
		{
			print_number(num / -10);
		}
		_putchar('0' - (num % 10));
	}

	else
	{
		if (n > 9)
		{
			print_number(num / 10);
		}
		_putchar('0' + (num % 10));
	}
}
