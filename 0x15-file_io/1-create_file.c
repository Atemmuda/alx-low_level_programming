#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, wr, text_size;

	text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (file_des == -1)
		return (-1);

	while (text_content[text_size])
		text_size++;

	wr = write(file_des, text_content, text_size);

	if (wr < 0)
		return (-1);

	if (close(file_des) < 0)
		return (-1);

	return (1);
}
