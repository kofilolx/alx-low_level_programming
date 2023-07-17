#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Nested loops
 * Return: 0
 */
int main(void)
{
	char i,j,k;

        for (i = 0; i <= 9; i++)
        {
                for (j = 0 ; j <= 9; j++)
                {
                        if (i != j && i < j)
                        {
                                putchar('0' + i);
                                putchar('0' + j);

                                if ( i || j != 99)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }

                }
        }
        putchar('\n');
        return (0);

}
