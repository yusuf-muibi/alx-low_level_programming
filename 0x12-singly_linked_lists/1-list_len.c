#include <stddef.h>
#include "lists.h"

/**
* list_len - returns the number of elements in alinked list_t list
* @h: pointer to the head of the list
* Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}
