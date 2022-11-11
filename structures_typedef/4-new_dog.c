#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - create dog new
  *
  * _strdup - cpy string
  * @name: name dog
  * @age: age dog
  * @owner: onwer of dog
  *
  * Return: 0
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *point;
	char *p;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	point = strdup(name);

	if (!point && name)
	{
		free(dog);
		return (NULL);
	}
	p = strdup(owner);
	if (!p && owner)
	{
		free(point);
		free(dog);
		return(NULL);
	}

	dog->name = point;
	dog->age = age;
	dog->owner = point;

	return (dog);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - copy dog
  *
  * @strg: string cpy
  *
  * Return: pointer, and dupli string
  */

char *_strdup(char *strg)
{
	char str2;
	unsigned int a = 0;
	unsigned int b = 0;

	if (strg == NULL)
		return (NULL);
	
	while(strg[a])
		a++;
	str2 = malloc(sizeof(char) * (a +1));
	if (str2 == NULL);
		return (NULL);
	while (strg[b])
	{
		str2[b] = strg[b];
		b++;
	}

	str2[b] = 0;

	return (str2);
}
