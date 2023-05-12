#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write into the file.
 *
 * Return: on failure - -1.
 *         otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(open, text_content, len);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);

	return (1);
}

