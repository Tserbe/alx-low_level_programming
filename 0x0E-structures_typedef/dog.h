#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdio.h>

/**
 * struct dog - main entry
 * @age: pointer
 * @name: pointer
 * @owner: pointer
 **/
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typedef
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
