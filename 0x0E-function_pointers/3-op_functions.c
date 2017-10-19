#include "3-calc.h"
#include <stdio.h>

/**
  * op_add - Adds 2 numbers
  * @a: First number, gets added to
  * @b: Second number, gets added to a
  * Return: The value of the addition of a + b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtracts 2 numbers
  * @a: First number, gets subtracted from
  * @b: Second number, subtracted from a
  * Return: The value of the subtraction of a - b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_div - Divides 2 numbers
  * @a: First number, the dividend
  * @b: Second number, the divisor
  * Return: The value of the division of a / b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mul - Multiplies 2 numbers
  * @a: First number
  * @b: Second number
  * Return: The value of the multiplication of a * b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_mod - Takes the modular of 2 numbers
  * @a: First number, the dividend
  * @b: Second number, the divisor
  * Return: The remainder of the division of (a / b) aka (a % b)
  */

int op_mod(int a, int b)
{
	return (a % b);
}
