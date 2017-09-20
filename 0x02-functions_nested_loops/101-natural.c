#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: void
  */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = i + sum;
	}
	printf("%d\n", sum);
}
