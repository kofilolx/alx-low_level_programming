#include "main.h"

/**
 * read_textfile - reads from a text file and print
 * to the standard output
 * @filename: name of file
 * @letters: content of file
 * Return: return number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buffer, letters);
	close(fd);

	if (rd == -1)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);

	if (rd != wr)
		return (0);
	return (wr);
}
