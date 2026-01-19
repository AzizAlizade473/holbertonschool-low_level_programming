#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The starting value (included).
 * @max: The ending value (included).
 *
 * Return: A pointer to the newly created array.
 * If min > max, returns NULL.
 * If malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate the number of elements needed */
	size = max - min + 1;

	/* Allocate memory for the array of integers */
	arr = malloc(sizeof(int) * size);

	/* If malloc fails, return NULL */
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
