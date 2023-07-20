#include "main.h"
#include <stdio.h>

/**
 * print_square - Print squares based on the integer size value.
 * @size : The number of lines using '#' character
 * Return: Void.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
