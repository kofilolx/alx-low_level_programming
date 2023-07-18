#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: This function prints the alphabet in lowercase
 * letters, repeating it 10 times. Each letter is printed on a
 * new line.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	}
}
