#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads file in text and prints to STDOUT.
 * @filename: parameter of text file to be read
 * @letters: length of numbers of letters to read
 * Return: w- size of bytes read and also printed
 * also prints 0 when function occurs or filename is Null.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
