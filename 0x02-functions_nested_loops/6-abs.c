#include "main.h"

/**
 * _abs - A function the prints absolute value of an integer
 * Description: This function checks whether the given integer 'n'
 * is a sign of a number.
 * It returns 1 if the character is lowercase,and 0 otherwise.
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _abs(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
