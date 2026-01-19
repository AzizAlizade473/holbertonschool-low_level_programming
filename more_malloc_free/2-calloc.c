#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory.
 * If nmemb or size is 0, returns NULL.
 * If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size, i;

	/* If nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size */
	total_size = nmemb * size;

	/* Allocate memory */
	ptr = malloc(total_size);

	/* If malloc fails, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
