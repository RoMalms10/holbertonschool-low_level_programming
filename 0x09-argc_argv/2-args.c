#include <stdio.h>

/**
  * main - Entry Point
  * @argc: The number of arguments passed
  * @argv: An array of pointers to arguments
  * Return: 0, always success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
