#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: character string.
 */

void puts_half(char *str)
{
	int len = 0;
	int n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	n = len / 2;

	while(str[n] != '\0')
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

