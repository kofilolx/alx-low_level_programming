#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : Write a program that prints all possible diferent
 * combinations of two digits.
 * Number must be seperated by " , " followed by a space ' '
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int c, d;
        int e = 0;

        while (e < 10)
        {
                d = e + 1;

                while (d < 10)
                {
                        c = d + 1;

                        while (c < 10)
                        {
                                putchar(e + '0');
                                putchar(d + '0');
                                putchar(c + '0');
                                if (c != 9 || d != 8 || e != 7)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                                c++;
                        }
                        d++;
                }
                e++;
        }
        putchar('\n');
        return (0);
}
