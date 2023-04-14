#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int W;
	int nletters;
	int NO;

	if (!filename)
		return (-1);

	W = open(filename, O_WRONLY | O_APPEND);

	if (W == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		NO = write(W, text_content, nletters);

		if (NO == -1 || nletters == -1)
			return (-1);
	}

	close(W);

	return (1);
}
