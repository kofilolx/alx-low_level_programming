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

	/* For loop - start */
	for (; alphabet_val <= 'z'; alphabet_val++)
	{
		if (alphabet_val == 'e' || alphabet_val == 'q')
			continue;
		putchar(alphabet_val);
	}
	putchar('\n');
	return (0);
}

