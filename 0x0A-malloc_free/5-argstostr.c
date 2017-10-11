#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * findcount - find the length of the arguments
  * @s: the string to count
  * Return: The count of the string
  */

int findcount(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * argstostr - takes arguments and turns them into strings
  * @ac: argument count
  * @av: an array of pointers to strings
  * Return: pointer to a new string containing all arguments seperated by \n
  */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, count;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = count = 0;
	for (i = 0; i < ac; i++)
		count += findcount(av[i]) + 1;/*+1 because need \n instead \0*/
	ptr = malloc(sizeof(char) * (count + 1));/*+1 for final \0*/
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++) /*amount of arguments, need to go to ac - 1*/
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j]; /*copies each word into ptr*/
			k++;
		}
		ptr[k] = '\n'; /*need a newline in between each word*/
		k++; /*need to increment after adding the newline*/
	}
	ptr[k] = '\0';
	return (ptr);
}
