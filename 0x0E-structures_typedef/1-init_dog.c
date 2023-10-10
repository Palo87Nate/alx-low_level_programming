#include "dog.h"
/**
 * init_dog - initialize a variable struct dog
 * @d: struct dog
 * @name: name
 * @age: age
 * @owner: owner's name
 * Description: some information abaout a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
