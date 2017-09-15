#include <stdio.h>

/**
  * main - Entry Point
  * pc stands for put char.
  * Prints the alphabet backwards
  * Return: Always 0 (Success)
  */
int main(void)
{
	int pc;

	for (pc = 'z'; pc >= 'a'; --pc)
		putchar(pc);
	putchar('\n');
	return (0);
}
