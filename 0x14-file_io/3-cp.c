#include "holberton.h"
#define BUFSIZE 1024

/**
 * main - copies one file to another
 * @argc: arg count
 * @argv: arguments
 *
 * Return: 0 success, -1 fail
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, file_fread, file_twrite, file_tclose, file_fclose;
	char *buffer;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_check(argv[1], argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_read(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_to == -1)
		error_write(argv[2]);
	buffer = malloc(sizeof(char) * BUFSIZE);
	if (buffer == NULL)
		return (1);
	file_fread = read(file_from, buffer, BUFSIZE);
	if (file_fread == -1)
		error_read(argv[1]);
	while (file_fread > 0)
	{
		file_twrite = write(file_to, buffer, file_fread);
		if (file_twrite == -1)
			error_write(argv[2]);
		file_fread = read(file_from, buffer, BUFSIZE);
		if (file_fread == -1)
			error_read(argv[1]);
	}
	file_fclose = close(file_from);
	if (file_fclose == -1)
		error_close(file_fclose);
	file_tclose = close(file_to);
	if (file_tclose == -1)
		error_close(file_tclose);

	free(buffer);
	return (0);
}

/**
 * file_check - check if file is NULL
 * @file: first file
 * @file2: second file
 * Return:none
 */

void file_check(char *file, char *file2)
{
	if (file == NULL)
		error_read(file);
	if (file2 == NULL)
		error_write(file2);
}

/**
 * error_close - error handling on close
 * @f: the fd value
 *
 * Return:none
 */

void error_close(int f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
}

/**
 * error_read - error handling on read
 * @file: the file that failed
 *
 * Return:none
 */

void error_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error_write - error handling on write
 * @file: the file that failed
 *
 * Return:none
 */

void error_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
