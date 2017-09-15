#include <stdio.h>

/**
  * main - Entry Point
  * Prints double digits separated by commas and spaces
  * Return: Always 0 (Success)
  */
int main(void)
{
	int fir = '0';
	int sec;

	while (fir <= '9')
	{
		sec = '0';
		while (sec <= '9')
		{
			putchar(fir);
			putchar(sec);
			if (fir == '9' && sec == '9')
				break;
			putchar(',');
			putchar(' ');
			++sec;
		}
	++fir;
	}
	putchar('\n');
	return (0);

}
