#include <stdio.h>

/**
  * main - Entry point
  * @argc: number of arguments
  * @argv: an array of pointers to strings
  * Return: 0, always success
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
