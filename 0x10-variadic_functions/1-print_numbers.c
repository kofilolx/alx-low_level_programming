#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers & new line at the end
 * @separator: character string
 * @n: number of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* varaible initialization */
	va_list args;
	unsigned int i, num;

	/* va_list init */
	va_start(args, n);

	/* start of loop */
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		/* if statement to check for separator */
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);

	printf("\n");
}
