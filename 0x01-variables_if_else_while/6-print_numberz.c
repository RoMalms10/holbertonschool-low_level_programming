#include <stdio.h>

/**
  * main - Entry Point
  * Prints base 10 numbers using only putchar
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
