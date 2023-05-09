#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t rw;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	rw = read(fo, &buf[0], letters);
	rw = write(STDOUT_FILENO, &buf[0], rw);
	close(fo);
	return (rw);
}
