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
	int openFlags;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t numread, numwr, inputFd;

	openFlags = O_RDONLY;

	if ((filename == NULL) || (buffer == NULL))
		return (0);
	inputFd = open(filename, openFlags);
	numread = read(inputFd, buffer, letters);
	numwr = write(1, buffer, numread);
	if ((inputFd == -1) || (numread == -1) || (numwr == -1) || (numwr != numread))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(inputFd);
	return (numwr);
}
