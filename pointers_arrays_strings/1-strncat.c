#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* 1. Loop to find the end of dest */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/* 2. Loop to append src to dest */
	/* We stop if we reach n bytes OR if we hit the end of src */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* 3. Add the terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}
