#include "main.h"

/**
 * read_textfile - contains a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: is the character pointer to file to be read
 * and print
 * @letters: the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *buf;
	ssize_t rd, wr;

	if (filename == NULL)
	{
		return (0);
	}

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	rd = read(file_des, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);

	return (wr);
}
