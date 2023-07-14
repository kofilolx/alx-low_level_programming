#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Initialization of character */
	char alphabet_val = 'a';

	/* While loop - start */
	while (alphabet_val <= 'z')
	{
		putchar(alphabet_val);
		/* Increment character value */
		alphabet_val++;
	}
	/* While loop - stop */
	putchar('\n');
	return (0);
}

