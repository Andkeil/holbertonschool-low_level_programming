#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * @filename: the filename
 * @text_content: text to append to end of file
 *
 * Return: 1 success -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, fwrite, fclose, tlen = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[tlen] != '\0')
			tlen++;
		fwrite = write(file, text_content, tlen);
		if (fwrite == -1)
			return (-1);
	}

	fclose = close(file);
	if (fclose == -1)
		return (-1);
	return (1);
}
