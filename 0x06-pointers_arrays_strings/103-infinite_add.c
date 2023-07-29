#include <stdio.h>

/**
 * infinite_add - add two string numbers
 * @n1: string number to add to n2
 * @n2: string number to add to n1
 * @r: buffer to store the sum
 * @size_r: size of buffer
 * Return: pointer to sum or 0 if it does not fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l_Num1 = 0, l_Num2 = 0, l_Size = 0;

	for (l_Num1 = 0; *(n1 + l_Num1); l_Num1++)
		;
	for (l_Num2 = 0; *(n2 + l_Num2); l_Num2++)
		;

	printf("%d, %d\n", l_Num1, l_Num2);
	return (r);
}
