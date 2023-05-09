#include "main.h"

/**
 * append_text_to_file - a function that appends
 * text at the end of a file
 *
 * @filename: const char pointer
 * @text_content: char pointer
 *
 * Return: int (SUCCESS OR FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openFlags = O_APPEND;
	ssize_t inputFd, numwr;

	if (filename == NULL)
		return (-1);
	inputFd = open(filename, openFlags);

	if (text_content != NULL)
	{
		numwr = write(inputFd, text_content, strlen(text_content));
		if (numwr == -1 || inputFd == -1)
			return (-1);
		close(inputFd);
		return (1);
	}
}
