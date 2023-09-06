#include "main.h"
#include <stdio.h>

/**
 * valid_file - checks the availability of files.
 * @rd_file: file to read from
 * @wr_file: file to write to
 * @argv: arguments vector.
 * Return: no return.
 */
void valid_file(int rd_file, int wr_file, char *argv[])
{
	if (rd_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}



/**
 * main - check codes
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_rd, file_wr, err_close;
	ssize_t n_chars, n_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_rd = open(argv[1], O_RDONLY);
	file_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	valid_file(file_rd, file_wr, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(file_rd, buf, 1024);
		if (n_chars == -1)
			valid_file(-1, 0, argv);
		n_wr = write(file_wr, buf, n_chars);
		if (n_wr == -1)
			valid_file(0, -1, argv);
	}

	err_close = close(file_rd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_rd);
		exit(100);
	}

	err_close = close(file_wr);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_rd);
		exit(100);
	}
	return (0);
}

