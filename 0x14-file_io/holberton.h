#ifndef HOLBERTON_SEEN
#define HOLBERTON_SEEN

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int writing_file(int file_from, int file_to);
void print_error(int error_number, ...);

#endif
