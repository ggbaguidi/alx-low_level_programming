#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: const char pointer
 * @text_content: a char pointer
 *
 * Return: int (SUCCESS OR FAILURE)
 */
int create_file(const char *filename, char *text_content)
{
	mode_t filePerms = S_IRUSR | S_IWUSR;
	int openFlags = O_CREAT | O_RDWR  | O_TRUNC;
	ssize_t outputFd, numwr;

	if (filename == NULL)
		return (-1);
	outputFd = open(filename, openFlags, filePerms);
	numwr = write(outputFd, text_content, strlen(text_content));
	if (numwr == -1 || outputFd == -1)
		return (-1);
	close(outputFd);
	return (1);
}
