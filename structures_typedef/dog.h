#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - struct of the dog
  *
  * @name: name dog
  * @age: age dog
  * @owner: dog owner
  * Return: 0
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * typedef dog_t - define name type struct dog
  */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
