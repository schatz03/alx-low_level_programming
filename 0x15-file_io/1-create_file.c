#include "main.h"
/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo, rw, len = 0;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo == -1)
		return (-1);
	if (len)
		rw = write(fo, text_content, len);
	close(fo);
	return (rw == len ? 1 : -1);
}
