#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * findlength - finds the length of a string
  * @s: the string to find length of
  * Return: the length of the string
  */

int findlength(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s && s[i] != '\0'; i++)
		count++;
	return (count);
}


/**
  * str_concat - concatenate 2 strings in a new string, even when passed NULL
  * @s1: the first string
  * @s2: the second string
  * Return: The concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	char *strcon;
	int i, j, count;

	j = 0;
	count = findlength(s1) + findlength(s2) + 1;
			/*+1 to add space for \0 at the end*/
	strcon = malloc(sizeof(char) * count);
	if (strcon == NULL)
		return (NULL);
	for (i = 0; s1 && s1[i] != '\0'; i++)
	{
		strcon[j] = s1[i];
		j++;
	}
	for (i = 0; s2 && s2[i] != '\0'; i++)
	{
		strcon[j] = s2[i];
		j++;
	}
	strcon[j] = '\0';
	return (strcon);
}
