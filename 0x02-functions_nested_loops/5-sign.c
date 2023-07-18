#include "main.h"

/**
 * 5-sign - Checks if a character is a sign of a number
 *
 * Description: This function checks whether the given character 'n'
 * is a sign of a number. It returns 1 if the character is lowercase,
 * and 0 otherwise.
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
