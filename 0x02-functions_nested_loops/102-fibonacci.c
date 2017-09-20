#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long int a, b, i, sum;

	a = 1;
	b = 2;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 2; i < 50; i++)
	{
		sum = a + b;
		if (i == 49)
		{
			printf("%ld\n", sum);
			break;
		}
		printf("%ld, ", sum);
		a = b;
		b = sum;
	}
	return (0);
}
