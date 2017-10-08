#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * @argc: The number of arguments passed
  * @argv: an array of pointers to arguments
  * Return: 1 when there are less than 2 arguments, 0 when succeed
  */

int main(int argc, char *argv[])
{
	int i, multiply;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	multiply = 1;
	for (i = 1; i < argc; i++)
		multiply *= atoi(argv[i]);
	printf("%d\n", multiply);
	return (0);
}
