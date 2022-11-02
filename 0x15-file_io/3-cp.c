#include "main.h"
#include <stdio.h>
/**
 * check_error - checks if files can be accessed
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return: no return
 */
void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
/**
 * main - check code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, clos_err;
	ssize_t nchar, wr;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, argv);
	nchar = 1024;
	while (nchar == 1024)
		nchar = read(file_from, buffer, 1024);
		if (nchar == -1)
			check_error(-1, 0, argv);
		wr = write(file_to, buffer, nchar);
		if (wr == -1)
			check_error(0, -1, argv);
	clos_err = close(file_from);
	if (clos_err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	clos_err = close(file_to);
	if (clos_err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	return (0);
}
