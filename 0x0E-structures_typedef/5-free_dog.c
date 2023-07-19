#include <stdio.h>
#include "dog.h"
/**
 * free__dog - dog data
 * @d: adfdaffdaadfda
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
