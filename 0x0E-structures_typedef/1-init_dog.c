#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize variable  struct dog
 * @d: struct dog
 * @name:  name
 * @age: dog
 * @owner: owner of the dog
 * Description:some information of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
