#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - compute simple math operations
 * @argc: number of arguments in argv
 * @argv: arguments containing 2 numbers and an operator
 * Return: Success (0), Error return 1
 */

int main(int argc, char *argv[])
{
	int (*ptr_op)(int, int);
	int op1, op2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr_op = get_op_func(argv[2]);

	if (!ptr_op)
	{
		printf("Error\n");
		exit(99);
	}
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);

	printf("%d\n", ptr_op(op1, op2));
	return (0);
}
