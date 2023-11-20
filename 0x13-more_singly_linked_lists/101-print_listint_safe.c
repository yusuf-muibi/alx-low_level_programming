#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: A pointer to the head of the listint_t list.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *t, *h;
size_t count = 0;
int loop_detected = 0;
if (head == NULL)
return (0);
t = h = head;
while (h != NULL && h->next != NULL)
{
printf("[%p] %d\n", (void *)t, t->n);
h = h->next->next;
t = t->next;
count++;
if (t == h)
{
loop_detected = 1;
printf("-> [%p] %d\n", (void *)t, t->n);
break;
}
}
if (!loop_detected)
{
t = head;
while (t != NULL)
{
printf("[%p] %d\n", (void *)t, t->n);
t = t->next;
count++;
}
}
return (count);
}
