#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: the starting number
 */
void print_to_98(int n)
{
	/* Logic for counting UP to 98 */
	if (n <= 98)
	{
		for (n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	/* Logic for counting DOWN to 98 */
	else
	{
		for (n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	
	/* Print the final number 98 */
	printf("98\n");
}
