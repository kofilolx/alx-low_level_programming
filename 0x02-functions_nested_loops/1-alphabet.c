#include "main.h"

/**
 * _alphabet - Prints the alphabet in lowercase letters
 *
 * Description: This function prints the alphabet in lowercase
 * letters. Each letter is printed on a new line.
 */

void _alphabet(void)
{
	char let = 'a';

	/* while loop */
	while (let <= 'z')
	{
		_putchar (let);
		let++;

	}
	_putchar ('\n');
}
