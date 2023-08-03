#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints strings
 * @s: Points to a char data type
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
