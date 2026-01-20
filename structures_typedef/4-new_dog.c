#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, l1, l2;

	for (l1 = 0; name[l1]; l1++)
		;
	for (l2 = 0; owner[l2]; l2++)
		;
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = malloc(l1 + 1);
	d->owner = malloc(l2 + 1);
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= l1; i++)
		d->name[i] = name[i];
	for (i = 0; i <= l2; i++)
		d->owner[i] = owner[i];
	d->age = age;
	return (d);
}
