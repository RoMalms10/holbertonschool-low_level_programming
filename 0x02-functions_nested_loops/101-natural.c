#include <stdio.h>
#include "holberton.h"

/**
  * main - Entry Point
  *
  * Return: void
  */

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = i + sum;
	}
	printf("%d\n", sum);
}
