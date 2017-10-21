#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints the numbers passed as arguments
  * @separator: string to print in between numbers
  * @n: the amount of numbers passed
  * Return: Nothing, void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(valist, int));
	}
	printf("\n");
	va_end(valist);
}
