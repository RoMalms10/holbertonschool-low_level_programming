#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * sum_them_all - adds all of the arguments/parameteres together
  * @n: Indicates the amount of arguments/paramters
  * Return: The sum of the arguments/parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list valist;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
