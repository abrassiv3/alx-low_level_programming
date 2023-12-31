#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a new type describing a dog
  * @name: dog name
  * @owner: dog owner
  * @age: dog age
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
