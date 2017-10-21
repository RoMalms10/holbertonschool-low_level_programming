#include "holberton.h"

/**
  * _strcmp - compares the ASCII value of chars in two different strings 1 by 1
  * @s1: the first string to be compared
  * @s2: the second string to be compared
  * Return: The difference between the ASCII value in the strings
  */

int _strcmp(char *s1, char *s2)
{
	int diff, index;

	diff = index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (diff == 0)
			diff = s1[index] - s2[index];
		index++;
	}
	return (diff);
}
