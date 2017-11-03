#include "holberton.h"

/**
  * get_endianness - checks the byte order of the machine
  * checks how bytes are stored in memory
  * Return: 1 if Little Endian, 0 for Big Endian
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == '1')
		return (1);
	else
		return (0);
}
