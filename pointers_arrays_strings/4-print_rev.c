#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	/* Calculate the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Print from the last character (length - 1) down to 0 */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
