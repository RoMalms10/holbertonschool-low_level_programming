#include "holberton.h"

/**
  * leet - Turn a string into leetspeak
  * @str: the string to convert
  * Return: pointer to the first element of str
  */

char *leet(char *str)
{
	int istr, icmp; /*index for str and compare*/
	char compare[] = {'a', 'A', 'e', 'E', 'l', 'L', 'o', 'O', 't', 'T'};
	char replace[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	istr = 0;
	while (str[istr] != '\0')
	{
		icmp = 0;
		while (compare[icmp] != '\0')
		{
			if (str[istr] == compare[icmp])
				str[istr] = replace[icmp];
			icmp++;
		}
		istr++;
	}
	return (str);
}
