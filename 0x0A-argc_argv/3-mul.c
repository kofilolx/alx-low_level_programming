#include <stdio.h>
#include <stdlib.h>


/**
 * multiply - Multiply two integers.
 * @arg1: The first integer to be multiplied.
 * @arg2: The second integer to be multiplied.
 *
 * Return: The product of the two integers.
 */

int multiply(char *arg1, char *arg2)
{
	int num_1, num_2;

	num_1 = atoi(arg1);
	num_2 = atoi(arg2);

	return (num_1 * num_2);
}

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: If the program receives two arguments - 0 else 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = multiply(argv[1], argv[2]);
	printf("%d\n", result);
	return (0);
}
