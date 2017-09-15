#include <stdio.h>

/**
  * main - Entry Point
  * ctr stands for counter
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ctr = '0';

	while (ctr <= '9')
	{
		putchar(ctr);
		ctr++;
	};
	ctr = 'a';
	while (ctr <= 'f')
	{
		putchar(ctr);
		ctr++;
	};
	putchar('\n');
	return (0);
}
