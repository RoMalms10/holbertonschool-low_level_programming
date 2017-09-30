#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	char gen[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; /*holds chars so that I can randomly select them 1 by 1 using rand*/
	char pswd[60]; /*store chars that are randomly generated*/
	int index; /*to cycle through password and add to it as i get chars*/
	int final; /*used to find out if I have made it to 2772 yet*/
	int temp; /*holds the random value generated*/

	final = index = 0;
	srand(time(NULL));
	while (1337)
	{
		temp = rand() % 62; /*produce a random number between 0 and 61 because my array ends at position 62, which is 63 chars long*/
		if (final == 2772) /*Check if the number is 2772 yet (specifically looking for this since the assembly code says we want it*/
		{
			pswd[index] = '\0'; /*add NULL char to break the password array*/
			break;
		}
		else if (final > 2772) /*If the additions add up to over 2772, need to reset and try again*/
		{
			final = 0;
			index = 0;
		}
		else /*Add numbers together to try and get 2772, checks in the next iteration of the loop*/
		{
			final = final + gen[temp];
			pswd[index] = gen[temp];
			index++;
		}
	}
	printf("%s\n", pswd);
	return (0);
}
