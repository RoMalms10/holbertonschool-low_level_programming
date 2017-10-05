#include "holberton.h"

/**
  * move - moves the pointer end to the end of the string
  * @end: the pointer we want to move to the end
  * Return: end, pointing to the end of the string (\0)
  */

char *move(char *end)
{
	if (*end != '\0')
		return (move(++end));
	return (end);
}

/**
  * compare - compares each pointer as they move inward
  * @beg: the pointer to the beginning of the string
  * @end: the pointer to the end of the string
  * Return: 0 if not a palindrome, 1 if a palindrome
  */

int compare(char *beg, char *end)
{
	if (*beg != *end)
		return (0);
	if (beg > end || beg == end)
		return (1);
	return (compare(++beg, --end));
}

/**
  * is_palindrome - takes a string and checks if it's a palindrome
  * @s: the string we want to check
  * Return: the value from the compare function, 0 or 1
  */

int is_palindrome(char *s)
{
	char *end;

	end = s;
	return (compare(s, (move(end) - 1))); /*-1 to get off the \0*/
}
