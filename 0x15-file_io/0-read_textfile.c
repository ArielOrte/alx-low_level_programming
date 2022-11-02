#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: 0 if the file can not be opened or read, if filename is NULL
 *       if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLy);
	re = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (fd == -1 || re == -1 || wr == -1 || re != wr)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (wr);
}
