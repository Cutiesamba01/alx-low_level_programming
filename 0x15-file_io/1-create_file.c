#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to a string to write to the file
 *
 * Return: -1 if function fails & 1 if function succeeds
 */

int create_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	if (filename == NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
