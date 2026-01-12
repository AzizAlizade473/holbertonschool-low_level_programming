#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	/* Loop from the start to the middle of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap a[i] with a[n - 1 - i] */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
