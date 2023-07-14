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
		if (alphabet_val == 'e')
			continue;
		if (alphabet_val == 'q')
			continue;
		putchar(alphabet_val);
		alphabet_val++;
	}
	putchar('\n');
	return (0);
}

