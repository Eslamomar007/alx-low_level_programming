#include "main.h"

/**
 * read_textfile - that reads a tdfasext file and prints
 * @filename: variable pointeafdsr
 * @letters: size lettersdsaf
 * Description: Write a fdafdfunction that reads a text file and prints it
 * to the POSIX standafsard output.
 * Return: the acasdftual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, let, w;
	char *t;

	t = malloc(letters);
	if (t == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(t);
		return (0);
	}

	let = read(f, t, letters);

	w = write(STDOUT_FILENO, t, let);

	close(f);
	return (w);
}
