#include "lists.h"

/**
* print_dlistint - Prints all elements of a doubly linked list.
* @h: Pointer to the head of the doubly linked list.
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
printf("%d", h->n);
if (h->next != NULL)
printf(" <-> ");

h = h->next;
node_count++;
}

printf("\n");

return (node_count);
}
