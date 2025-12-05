#include "main.h"

/**
 * append_text_to_file - Append text content in a file
 * @filename: Name of file
 * @text_content: Text to append
 *
 * Return: (Success) 1
 * (Error) -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (*(text_content + len) != '\0')
		len++;

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
