#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_all - prints any type of argument
  * @format: the way in which argument types are passed
  * Return: nothing, void
  */

void print_all(const char * const format, ...)
{
	unsigned int i, x;
	va_list ap;
	char *s, *hold;

	s = ", ";
	i = x = 0;
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		if (x == 1)
			printf("%s", s);
		x = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			hold = va_arg(ap, char *);
			if (hold == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", hold);
			break;
		default:
			x = 0;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
