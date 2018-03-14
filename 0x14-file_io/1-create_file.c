#include <errno.h>
#include "holberton.h"

/**
 * create_file - create a file
 * @filename: the filename
 * @text_content: text to write
 *
 * Return:int, bytes written
 */

int create_file(const char *filename, char *text_content)
{
	int file, fwrite, fclose, tlen = 0;
	mode_t mode = S_IWUSR | S_IRUSR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[tlen] != '\0')
			tlen++;
		fwrite = write(file, text_content, tlen);
	}

	if (fwrite == -1)
		return (-1);

	fclose = close(file);
	if (fclose == -1)
		return (-1);
	return (1);
}
