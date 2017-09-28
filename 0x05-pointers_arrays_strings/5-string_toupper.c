#include "holberton.h"

/**
  * string_toupper - converts lowercase characters in a string to uppercase
  * @str: The string to convert
  * Return: pointer to the first element of the str array
  */

char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32;
		index++;
	}
	return (str);

}
