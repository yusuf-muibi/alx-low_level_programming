#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_listint_safe - Frees a listint_t list.
* @h: A pointer to the head of the listint_t list.
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *next;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current != NULL)
{
size++;
next = current->next;
free(current);
current = next;
if (size > 1 && current >= *h)
{
*h = NULL;
break;
}
}
return (size);
}
