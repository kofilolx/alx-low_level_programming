#include <main.h>

/**
 * main : A program that prints _putchar
 *
 * Description: _putchar as output only
 *
 * Return: Always 0 
 */

int main(void)
{
	/* Array declaration */
	char ar[] = '_putchar';
	int i = 0;

	/* For loop to read array */
	for (; i < sizeof(ar); i++)
	{
		_putchar(ar[i]);
	}
	_putchar("\n");
	return (0);
}

