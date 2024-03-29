#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: return string
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	length = _strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
