#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Calculate the length of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop continues until the end of string */
	}

	/* Swap characters */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = temp;
	}
}
