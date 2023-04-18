#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - dog frees
 * @d: pointer of the dog free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
