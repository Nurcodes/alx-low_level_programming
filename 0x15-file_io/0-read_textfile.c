#include "main.h"

/**
 * read_textfile - reads a text file a prints it to stdout
 * @filename: file
 * @letters: number of letters to read
 * Return: no. of letters written to stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *buf;

	if (letters < 1)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i + 1] = '\0';

	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (y);

}
