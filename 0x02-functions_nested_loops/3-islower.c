#include "holberton.h"

/**
  * _islower - checks if char c is lowercase
  * @c: c gets compared to the lowercase a through z ascii values
  * Return: 1 when lowercase, 0 when uppercase or anything else
  */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
