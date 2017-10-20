#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings that are passed
  * @separator: the string to print in between strings
  * @n: the number of strings passed
  * Return: nothing, void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *hold;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(ap, char *);
		if (separator != NULL && i != 0)
			printf("%s", separator);
		printf("%s", hold == NULL ? "(nil)" : hold);
	}
	printf("\n");
	va_end(ap);
}
