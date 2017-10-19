#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
  * get_op_func - takes string then sorts through an array of structs
  * to find the right operation
  *
  * Then, it returns the address of a function if it matches the string in
  * th first element of a struct
  *
  * @s: the string/char to look for in the struct
  * Return: If successful, returns an address to a function, otherwise NULL
  */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
