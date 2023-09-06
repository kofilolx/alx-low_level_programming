#include "main.h"

/**
 * read_textfile - reads from a text file and print
 * to the standard output
 * @filename: name of file
 * @letters: content of file
 * Return: return number of letters printed
 */

ssize_t read_textfile(const char filename, size_t letters)
{
	int f_loc, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_loc = open(filename, O_RDONLY);
	if (f_loc == 0 || f_loc < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(f_loc);
		return (0);
	}
	rd = read(f_loc, buffer, letters);
	/* close(f_loc); */
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);

	if (rd != wr)
		return (0);

	return (rd);
}
