#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * main - Entry Point
  * @argc: Number of arguments passed to function
  * @argv: Array of pointers to strings(arguments)
  * Return: 0 if success, 98 - 100 for different errors
  */

int main(int argc, char *argv[])
{
	int (*funcptr)(int, int); /*Need to hold the address later*/
	int ag1, ag3;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ag1 = atoi(argv[1]);
	ag3 = atoi(argv[3]);/*Have to check here to see if atoi fails (0)*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && ag3 == '0')
	{
		printf("Error\n");
		exit(100);
	}
	funcptr = get_op_func(argv[2]);
	if (funcptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", funcptr(ag1, ag3));
	return (0);
}
