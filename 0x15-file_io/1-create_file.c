#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 * Return: If the function fails - -1, otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int d, m, e = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (e = 0; text_content[e];)
			e++;
	}
	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(d, text_content, e);
	if (d == -1 || m == -1)
		return (-1);
	close(d);
	return (1);
}
