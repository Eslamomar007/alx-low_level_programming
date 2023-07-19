#include <stdio.h>
#include "dog.h"
/**
 * print_dog dog - dog data
 * @d: adfdaffdaadfda
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ?  (printf("name: %d\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %d\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
