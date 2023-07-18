#include "main.h"

/**
 * main - A program that prints _putchar
 *
 * Description: _putchar as output only
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	/* Array declaration */
	char a[] = "_putchar";
	int i = 0;

	/* For loop to read array */
	for (; i < 9; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
