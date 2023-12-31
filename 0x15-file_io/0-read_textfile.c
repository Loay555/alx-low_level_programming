#include "main.h"
#include <stdlib.h>

/**
 *read_textfile- Read text file print to STDOUT
 *@filename: text file being read
 *@letters: number of letters to be read
 *Return: w- actual number of bytes read and
 *printed 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *r;
	ssize_t e;
	ssize_t w;
	ssize_t g;

	e = open(filename, O_RDONLY);
	if (e == -1)
		return (0);
	r = malloc(sizeof(char) * letters);
	g = read(e, r, letters);
	w = write(STDOUT_FILENO, r, g);
	free(r);
	close(e);
	return (w);

}
