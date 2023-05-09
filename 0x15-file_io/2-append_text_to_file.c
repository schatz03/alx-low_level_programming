#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	ssize_t rw = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
		return (-1);
	if (len)
		rw = write(fd, text_content, len);
	close(fo);
	return (rw == len ? 1 : -1);
}
