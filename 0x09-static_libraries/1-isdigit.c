#include "main.h"

/**
 * _isdigit - Checks if paramter c represents a digit.
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
