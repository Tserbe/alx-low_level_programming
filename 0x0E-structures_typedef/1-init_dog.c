#include "dog.h"
/**
 * init_dog - main entry
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: patameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).age = age;
		(*d).name = name;
		(*d).owner = owner;
	}
}
