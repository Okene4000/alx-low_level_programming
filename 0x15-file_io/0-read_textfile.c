#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads  text file and prints to the POSIX standard output
 * @filename: pointer to the name of file
 * @letters: the number of letters the function reads and prints
 * Return: 0 if the function fails
 *         actual number of bytes function reads and prints if otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
