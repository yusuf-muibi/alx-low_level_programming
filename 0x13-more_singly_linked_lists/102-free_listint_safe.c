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
int t;
listint_t *u;

if (h == NULL || *h == NULL)
return (0);
while (*h)
{
t = *h - (*h)->next;
if (t > 0)
{
u = (*h)->next;
free(*h);
*h = u;
size++;
}
else
{
free(*h);
*h = NULL;
size++;
break;
}
}
*h = NULL;
return (size);
}
