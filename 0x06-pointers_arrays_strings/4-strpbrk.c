#include "holberton.h"

/**
  * _strpbrk - returns a pointer to the first instance of char in accept in s
  * @s: the string to scan
  * @accept: the characters we are looking for
  * Return: pointer to the first instance in the string OR NULL if none found
  */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	int i, j;

	ptr = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (ptr + i); /*returns location in string*/
		}
	}
	return (NULL);/*if nothing found, return NULL*/
}
