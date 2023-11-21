#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to the beginning of the list
* Return: The address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *t = head;
listint_t *h = head;
while (t && h && h->next)
{
t = t->next;
h = h->next->next;
if (t == h)
{
t = head;
while (t != h)
{
t = t->next;
h = h->next;
}
return (t);
}
}
return (NULL);
}
