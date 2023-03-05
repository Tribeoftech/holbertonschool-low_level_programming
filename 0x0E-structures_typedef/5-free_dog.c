#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees up memory allocated for dog.
 *
 * @d: the structure being freed.
 *
 * Return: void.
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
