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
        /* varaible initialization */
        va_list args;
        unsigned int i;
        char c_arg;
        int i_arg;
        float f_arg;
        char *s_arg;

        va_start(args, format);

        i = 0;
        while (format && format[i])
        {
                switch (format[i])
                {
                        case 'c':
                                c_arg = va_arg(args, int);
                                printf("%c", c_arg);
                                break;
                        case 'i':
                                i_arg = va_arg(args, int);
                                printf("%d", i_arg);
                                break;
                        case 'f':
                                f_arg = va_arg(args, double);
                                printf("%f", f_arg);
                                break;
                        case 's':
                                s_arg = va_arg(args, char *);
                                if (s_arg != NULL)
                                        printf("%s", s_arg);
                                else
                                        printf("(nil)");
                                break;
                        default:
                                break;
                }

                if (format[i + 1])
                        printf(", ");
                i++;
        }

        va_end(args);

        printf("\n");
}
