#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int i, n, j;

	/* Calculate the length of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	/* Determine the starting index (n) */
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}

	/* Print from the starting index n to the end */
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
