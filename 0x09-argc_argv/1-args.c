#include <stdio.h>

/**
  * main - Entry Point
  * @argc: the number of arguments passed to the function
  * @argv: unused variable
  * Return: 0, always success
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
