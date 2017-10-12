#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * findlength - finds the length of a string
  * @s: find the length of this string
  * Return: the length of the string, unsigned to compare with other unsigned
  */

unsigned int findlength(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * string_nconcat - concatenates 2 strings, up to n chars in the second string
  * @s1: copy this whole string first
  * @s2: concatenate this string up to n chars onto s1
  * @n: the amount of chars to concatenate in string 2
  * Return: The pointer to the newly allocated concatenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int count, i, k;

	count = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (findlength(s2) < n)
		n = findlength(s2);
	count = findlength(s1) + n + 1;
	ptr = malloc(sizeof(*ptr) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[k] = s1[i];
		k++;
	}
	for (i = 0; i < n; i++)
	{
		ptr[k] = s2[i];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
