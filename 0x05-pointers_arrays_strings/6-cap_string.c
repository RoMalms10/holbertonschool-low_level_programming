#include "holberton.h"

/**
  * capitalize - checks if str[index] is a lowercase letter
  * @cap: the char getting passed to see if it needs to be capitalized
  * Return: the char at str[index] that was or was not capitalized
  */

char capitalize(char cap)
{
	if (cap >= 97 && cap <= 122)
		cap = cap - 32;
	return (cap);
}

/**
  * cap_string - capitalizes words of a string if there is a separator before
  * @str: the string that you want to capitalize
  * Return: pointer to the beginning of the array str
  */

char *cap_string(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index - 1] == 32) /*check if space*/
			str[index] = capitalize(str[index]);
		if (str[index - 1] == 9) /*check if tab*/
			str[index] = capitalize(str[index]);
		if (str[index - 1] == '\n')
			str[index] = capitalize(str[index]);
		if (str[index - 1] == '.')
			str[index] = capitalize(str[index]);
		index++;
	}
	return (str);
}
