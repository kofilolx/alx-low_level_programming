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
	char  a = 'a';

	/* While loop - start */
	while (a <= 'z')
	{
		putchar(a);
		/* Increment character value */
		a++;
	}
	/* Initialization of character */
	a = 'A';

	/* While loop - start */
	while (a <= 'Z')
	{
		putchar(a);
		/* Increment character value */
		a++;
	}
	/* While loop - stop */
	putchar('\n');
	return (0);
}

