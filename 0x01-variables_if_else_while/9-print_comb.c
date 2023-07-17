#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing numbers in ascending order
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';

	for (; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
