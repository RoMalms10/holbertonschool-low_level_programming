#include "holberton.h"

/**
  * rot13 - convert string to rot13 format
  * @str: the string to convert
  * Return: pointer to the first element of the array str
  */

char *rot13(char *str)
{
	int istr, icmp; /*index for string and compare*/
	char compare[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	istr = 0;
	while (str[istr] != '\0')
	{
		icmp = 0;
		while (compare[icmp] != '\0')
		{
			if (str[istr] == compare[icmp])
			{
				str[istr] = replace[icmp];
				break;
			}
			icmp++;
		}
		istr++;
	}
	return (str);
}
