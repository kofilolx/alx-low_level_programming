#include "holberton.h"
#include "main.h"
/**
 * print_square - Print squares based on the integer size value.
 * @size : The number of lines using '#' character
 * Return: Void.
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
