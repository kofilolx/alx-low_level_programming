#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
