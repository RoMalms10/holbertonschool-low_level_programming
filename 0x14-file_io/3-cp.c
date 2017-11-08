#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
  * main - entry point
  * @argc: argument count
  * @argv: array of pointers to arguments
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_close, writing_check;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error(97);
	/*open the file to read from*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error(98, argv[1]);
	/*open the file to write to*/
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, mode);
	if (file_to == -1)
		print_error(99, argv[2]);
	/*write to file_to by pasing it to a function*/
	writing_check = writing_file(file_from, file_to);
	if (writing_check == -1)
		print_error(98, argv[1]);
	else if (writing_check == -2)
		print_error(99, argv[2]);
	/*close file_from*/
	file_close = close(file_from);
	if (file_close == -1)
		print_error(100, file_from);
	/*close file_to*/
	file_close = close(file_to);
	if (file_close == -1)
		print_error(100, file_to);
	return (0);
}

/**
  * writing_file - copies what's in one file to another file
  * @file_from: file to copy
  * @file_to: the file to write in
  * Return: 0 on success, -1 if read fails, -2 if write fails
  */
int writing_file(int file_from, int file_to)
{
	char *buffer;
	int reading, wrote;

	buffer = malloc(BUF_SIZE);
	do {
		reading = read(file_from, buffer, BUF_SIZE);
		if (reading == -1)
			return (-1);
		wrote = write(file_to, buffer, reading);
		if (wrote == -1 || wrote != reading)
			return (-2);
	} while (reading == 1024);
	free(buffer);
	return (0);
}

/**
  * print_error - prints error messages and exits the functions
  * @error_number: the error number to exit with
  * Return: nothing, void
  */
void print_error(int error_number, ...)
{
	va_list valist;

	va_start(valist, error_number);
	if (error_number == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (error_number == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from ");
		dprintf(STDERR_FILENO, "file %s\n", va_arg(valist, char *));
		exit(98);
	}
	else if (error_number == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write ");
		dprintf(STDERR_FILENO, "to %s\n", va_arg(valist, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close ");
		dprintf(STDERR_FILENO, "fd %d\n", va_arg(valist, int));
		exit(100);
	}
	va_end(valist);
}
