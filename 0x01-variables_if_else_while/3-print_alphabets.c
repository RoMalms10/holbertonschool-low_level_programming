#include <stdio.h>

/**
 * main - Entry Point
 * Will print a through z followed by capital A through Z
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pr;

	for (pr = 'a'; pr <= 'z'; ++pr)
		putchar(pr);
	for (pr = 'A'; pr <= 'Z'; ++pr)
		putchar(pr);
	putchar('\n');
	return (0);
}
