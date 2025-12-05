#include "main.h"
#include <stdio.h>

/**
 * read_textfile - Read a texte from a file
 * @filename: Name of file
 * @letters: Number of char(s) to read
 *
 * Return: (Success) Number of char(s) printed
 * (Fail) 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readed;
	ssize_t bytesRead;

	readed = 0;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	while (readed < (ssize_t) letters)
	{
		bytesRead = read(fd, buffer, (letters - readed));
		if (bytesRead == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

		readed += bytesRead;
		if (write(1, buffer, bytesRead) == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		if (bytesRead == 0)
			break;
	}

	free(buffer);
	close(fd);

	return (readed);
}
