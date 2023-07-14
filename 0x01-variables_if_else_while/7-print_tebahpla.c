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
	char alp;

	/* For loop - start */
	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);

	}
	/* While loop - stop */
	putchar('\n');
	return (0);
}

