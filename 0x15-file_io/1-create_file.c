#include "main.h"
/**
 * _strlen - return length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t	bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}
	else
		length = _strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
