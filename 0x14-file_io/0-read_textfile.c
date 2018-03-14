#include "holberton.h"

/**
 * read_textfile - Reads text file and print to stdout
 * @filename: text file
 * @letters: number of letters to read and print
 *
 * Return: number of letters to read and print, 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file, fwrite, fclose, fread;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, buffer, letters);
	if (fread == -1)
		return (0);

	fwrite = write(STDOUT_FILENO, buffer, fread);
	if (fwrite == -1)
		return (0);
	fclose = close(file);
	if (fclose == -1)
		return (0);

	free(buffer);
	return (fread);
}
