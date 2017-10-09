#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: an array of pointers to arguments
  * Return: 1 if not the right number of arguments, 0 if success
  */

int main(int argc, char *argv[])
{
	int count, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	money = atoi(argv[argc - 1]);
	if (money < 0) /*checks if negative number*/
	{
		printf("0\n");
		return (0);
	}
	while (money > 0)
	{
		if (money - 25 >= 0)
			money -= 25;
		else if (money - 10 >= 0)
			money -= 10;
		else if (money - 5 >= 0)
			money -= 5;
		else if (money - 2 >= 0)
			money -= 2;
		else if (money - 1 >= 0)
			money -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
