#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints strings & new line at the end
 * @format: specifiers
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *ptr, *put_sep = "";
	va_list d_args;
	char c_arg;
	int i_arg;
	float f_arg;

	va_start(d_args, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c_arg = va_arg(d_args, int);
				printf("%s%c", put_sep, c_arg);
				break;
			case 'i':
				i_arg = va_arg(d_args, int);
				printf("%s%d", put_sep, i_arg);
				break;
			case 'f':
				f_arg = va_arg(d_args, double);
				printf("%s%f", put_sep, f_arg);
				break;
			case 's':
				ptr = va_arg(d_args, char *);
				if (!ptr)
					ptr = "(nil)";
				printf("%s%s", put_sep, ptr);
				break;
			default:
				i++;
				continue;
		}
		put_sep = ", ";
		i++;
	}
	va_end(d_args);
	printf("\n");
}
