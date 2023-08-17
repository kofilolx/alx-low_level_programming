#include <stdlib.h>
#include <stdio.h>


/**
 * display - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void display(char *a, int n);

/**
 * main - print opcodes of main
 * @argc: number of args in argv, should be 2
 * @argv: args containing number of bytes to print
 * Return: Success (0), Error (1)
 */
int main(int argc, char **argv)
{
	int d_type;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	d_type = atoi(argv[1]);

	if (d_type < 0)
	{
		printf("Error\n");
		exit(2);
	}

	display((char *)&main, d_type);
	return (0);
}


/**
 * display - Print opcodes to the console
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void dislpay(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}

	printf("\n");
}
