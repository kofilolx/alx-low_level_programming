#include "main.h"

/**
 * _puts_recursion - prints strings
 * @s: points to a char data type
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	return;
}
