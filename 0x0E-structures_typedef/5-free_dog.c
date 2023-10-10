#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct.
 * @d: the struct dogwe want to free.
 */
void free_dog(dog_t *d)
{
	while (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
