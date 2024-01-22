#include "dog.h"
/**
*free_dog - main entry
*@d: returns zero
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
