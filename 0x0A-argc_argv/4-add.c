#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of two numbers, followed by a new line.
 * @argc: number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: If the program receives two arguments - 0 else 1
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
