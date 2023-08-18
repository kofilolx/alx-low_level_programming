#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings & new line at the end
 * @separator: character string
 * @n: number of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* varaible initialization */
	va_list args;
	unsigned int i;
	char *ptr;

	/* va_list init */
	va_start(args, n);

	/* start of loop */
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr != NULL)
		{
			printf("%s", ptr);
		}
		else
			printf("%s", ptr);

		/* if statement to check for separator */
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);

	printf("\n");
}
