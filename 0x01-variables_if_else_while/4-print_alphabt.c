#include <stdio.h>

/**
 * main - Entry Point
 * Will print a through z followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
		int pr;

		for (pr = 'a'; pr <= 'z'; ++pr)
		{
			if (pr == 'q' || pr == 'e')
			{
				continue;
			}
			putchar(pr);
		}
		putchar('\n');
		return (0);
}
