#include "main.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	o = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
		w = write(o, text_content, len);
	}

	else
	{
		close(o);
		return (1);
	}

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
