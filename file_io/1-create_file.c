#include "main.h"

/**
 * create_file - Create a file with content or not
 * @filename: Name of the file
 * @text_content: Content of file or null
 *
 * Return: (Success) 1
 * (Error) -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytesWritten;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (*(text_content + len) != '\0')
		len++;

	bytesWritten = write(fd, text_content, len);
	if (bytesWritten == -1)
		return (-1);

	close(fd);
	return (1);
}
