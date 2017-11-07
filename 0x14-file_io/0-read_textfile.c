#include "holberton.h"

/**
  * read_textfile - reads a text file and prints it to standard output
  * @filename: pointer to the file to read and write
  * @letters: the amount of bytes to write up to
  * Return: 0 if failure, otherwise number of bytes written
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened, wrote, reading;
	char *buffer;

	if (filename == NULL)
		return (0);
	opened = open(filename, O_RDONLY);
	if (opened == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	reading = read(opened, buffer, letters);
	if (reading == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buffer, reading);
	if (wrote == -1 || wrote != reading)
		return (0);
	close(opened);
	free(buffer);
	return (wrote);
}
