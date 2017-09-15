#include <stdio.h>

/**
  * main - Entry Point
  * Prints base 10 numbers separated by commas
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ctr = '0';

	while (ctr <= '9')
	{
		putchar(ctr);
		if (ctr == '9')
			break;
		putchar(',');
		putchar(' ');
		++ctr;
	};
	putchar('\n');
	return (0);
}
