#include "main.h"

/**
 * create_file - creates a file
 * @filename: p
 * @text_content: content
 * Return: 1 or -1
 */


int create_file(const char *filename, char *text_content)
{
	int fd;

	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	if (write(fd, text_content, i) == -1)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);

}
