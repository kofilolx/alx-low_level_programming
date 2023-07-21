#include <stdio.h>
#include "main.h"
#include "holberton.h"
/**
 * print_most_numbers - Print numbers between 0 to 9 with exceptions.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');

		i++;
	}
	_putchar('\n');
}
