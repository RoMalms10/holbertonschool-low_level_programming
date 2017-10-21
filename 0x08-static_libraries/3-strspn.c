#include "holberton.h"

/**
  * _strspn - returns length of string consisting entirely of set chars
  * @s: The string scanned to see if letter match someting in accept
  * @accept: letters to scan for in s
  * Return: length of string until you find a char that isn't in accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j]) /*matches, so increment string*/
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0') /*means didn't find a match so break*/
			break;
	}
	return (i);
}
