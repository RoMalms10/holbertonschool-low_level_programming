#include <stdio.h>

/**
  *
  *
  *
  *
  */

int main(void)
{
	long int a, b, i, sum;

	a = 1;
	b = 2;
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
