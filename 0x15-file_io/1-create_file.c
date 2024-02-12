#include "main.h"

/**
 * create_file - fdasreates a file
 * @filename: asdffilename.
 * @text_content: cafsdontent writed in the file.
 *
 * Return: 1 if it succasfdess. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rw = write(f, text_content, nletters);
	if (rw == -1)
		return (-1);

	close(f);
	return (1);
}
