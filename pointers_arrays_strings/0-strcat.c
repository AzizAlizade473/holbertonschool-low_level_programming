#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* 1. Loop to find the end of dest (where the null byte is) */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/* 2. Loop to append src to dest starting at index i */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* 3. IMPORTANT: Add the terminating null byte at the end */
	dest[i + j] = '\0';

	return (dest);
}
