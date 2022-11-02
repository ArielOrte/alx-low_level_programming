#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

	}

	fd = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);

	return (1);
}
