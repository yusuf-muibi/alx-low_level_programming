#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: The hash table.
* @key: The key string (cannot be an empty string).
* @value: The value associated with the key (duplicated; can be an empty string).
* Return: 1 if it succeeded, 0 otherwise.
* In case of collision, the new node is added at the beginning of the list.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}

unsigned long int index = key_index((unsigned char *)key, ht->size);

hash_node_t *current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
{
return (0);
}
return (1);
}
current = current->next;
}

hash_node_t *newNode = malloc(sizeof(hash_node_t));
if (newNode == NULL)
{
return (0);
}

newNode->key = strdup(key);
newNode->value = strdup(value);
if (newNode->key == NULL || newNode->value == NULL)
{
free(newNode->key);
free(newNode->value);
free(newNode);
return (0);
}

newNode->next = ht->array[index];
ht->array[index] = newNode;

return (1);
}
