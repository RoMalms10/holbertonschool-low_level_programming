#include <stdio.h>

/**
  *
  *
  *
  */

int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 2;
	c = a + b;
	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
