#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (casted to int*)
 * @size: the size of the matrix (size x size)
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Main diagonal: row = col */
		sum1 += a[(size * i) + i];

		/* Secondary diagonal: row + col = size - 1 */
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
