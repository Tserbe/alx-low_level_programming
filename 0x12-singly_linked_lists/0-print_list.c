#include "lists.h"
/**
 * print_list - main entry
 * @h: pointer
 * Return: insets zero
 */
size_t print_list(const list_t *h)
{
unsigned int u = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
u++;
h = h->next;
}
return (u);
}
