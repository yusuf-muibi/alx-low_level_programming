#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: A pointer to the pointer to the head of the listint_t list.
* Return: The head node’s data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;
if (head == NULL || *head == NULL)
return (0);
temp = *head;
data = temp->n;
*head = temp->next;
free(temp);
return (data);
}
