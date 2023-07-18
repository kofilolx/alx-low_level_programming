#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase letters
 *
 * Description: This function prints the alphabet in lowercase
 * letters. Each letter is printed on a new line.
 */
void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar (let);
		let++;

	}
	_putchar ('\n');

}
