#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/* Loop while either string still has characters */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		/* If characters at this index don't match, return the difference */
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	/* If the loop finishes, the strings are identical */
	return (0);
}
