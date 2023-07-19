#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print first 50 fibonacci number from 1
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Array to hold fib sequence numbers */
	unsigned long int arr[50];
	int i;

	/*initializing first two arr values to 1 n 2*/
	arr[0] = 1;
	arr[1] = 2;

	/* Calculate fib sequence */
	for (i = 2; i < 50; i++)
	{
		/* fibonacci formaula */
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	/* Printing fib seq to console */
	for (i = 0; i <= 49; i++)
	{
		printf("%ld, ", arr[i]);
	}
	putchar('\n');
	return (0);
}
