#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data (n) of a list.
* @head: Pointer to the head of the list.
* Return: Sum of all the data in the list.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
