#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - variable type
  * @d: dog struct
  * @name: name dog
  * @age: age dog
  * @owner: dog owner
  *
  * Return: 0
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
