#include "holberton.h"

/**
  * append_text_to_file - appends text to a file
  * @filename: file to write in to
  * @text_content: the text to write
  * Return: -1 on failure, 1 on succes
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int opened, wrote, i, closing;

	if (filename == NULL)
		return (-1);
	opened = open(filename, O_WRONLY | O_APPEND);
	if (opened == -1)
		return (-1);
	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}
	wrote = write(opened, text_content, i);
	if (wrote == -1)
		return (-1);
	closing = close(opened);
	if (closing == -1)
		return (-1);
	return (1);
}
