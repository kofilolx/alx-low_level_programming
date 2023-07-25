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

	n = len - 1 / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

