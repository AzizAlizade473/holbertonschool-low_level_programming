#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first match, or -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* 1. Safety checks: return -1 if array/cmp is NULL or size is 0 */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* 2. Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* 3. If cmp returns something other than 0, we found it */
		if (cmp(array[i]) != 0)
			return (i);
	}

	/* 4. If the loop finishes without returning, no match was found */
	return (-1);
}
