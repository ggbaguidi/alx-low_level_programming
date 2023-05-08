#include "main.h"

/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: const char pointer
 * @letters: the numbers of letters it could read and print
 *
 * Return: the number of bytes actually read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int inputFd, openFlags;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t numread, numwritten;

	openFlags = O_RDWR;

	if (filename == NULL)
		return (0);
	inputFd = open(filename, openFlags);
	if (inputFd == -1)
		return (0);

	numread = read(inputFd, buffer, letters);
	if (numread == -1)
		return (0);
	if ((numwritten = write(1, buffer, numread)) != numread)
		return (0);
	free(buffer);
	return (numwritten);
}
