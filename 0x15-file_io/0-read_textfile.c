#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: A pointer to the name of the file.
 * @letters: The numder of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL -0.
 * O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, lett, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	lett = read(file, text, letters);

	w = write(STDOUT_FILENO, text, lett);

	close(file);

	return (w);
}
