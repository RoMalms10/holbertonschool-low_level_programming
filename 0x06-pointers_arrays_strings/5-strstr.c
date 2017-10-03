#include "holberton.h"

/**
  * _strstr - finds a string in a string and points to the first location
  * @haystack: the string we are searching through
  * @needle: the string we are looking for
  * Return: a pointer to the first spot of similarity or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	int j;

	for (; *haystack != '\0'; haystack++)
	{
		j = 0;
		ptr = haystack; /*need to reset pointer every time to check*/
		while (*ptr == needle[j]) /*char in memory at ptr is equal*/
		{
			j++;
			ptr++;
			if (needle[j] == '\0') /*made it through string*/
				return (haystack);
		}
	}
	if (needle == '\0')
		return (haystack);
	return (NULL);
}
