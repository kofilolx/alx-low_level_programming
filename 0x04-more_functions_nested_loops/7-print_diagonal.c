#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i, tab;

	/*For loop for rows */
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		/* for loop for columns */
		for (tab = 0; tab = i; tab++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
