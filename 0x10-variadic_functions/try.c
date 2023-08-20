#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings & new line at the end
 * @separator: character string
 * @n: number of args
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i;
    char c_arg;
    int i_arg;
    float f_arg;
    char *s_arg;
    char *sep = ", ";

    va_start(args, format);

    i = 0;
    while (format && format[i])
    {

        switch (format[i])
        {
            case 'c':
                c_arg = va_arg(args, int);
                printf("%s%c",sep, c_arg);
                break;
            case 'i':
                i_arg = va_arg(args, int);
                printf("%s%d",sep, i_arg);
                break;
            case 'f':
                f_arg = va_arg(args, double);
                printf("%s%f",sep, f_arg);
                break;
            case 's':
                s_arg = va_arg(args, char *);
                if (s_arg != NULL)
			s_arg = "(nil)";
		printf("%s%s",sep, s_arg);
		break;

            default:
                break;
        }

        i++;
    }

    va_end(args);

    printf("\n");
}
