#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char str2[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j += 2)
		{
			if (str[i] == str2[j])
			{
				str[i] = str2[j + 1];
			}
		}
	}

	return (str);
}
