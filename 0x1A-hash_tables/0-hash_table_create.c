#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - Creates a hash table
* @size: The size of the array for the hash table
* Return: A pointer to the newly created hash table, or NULL if something went wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));
if (ht == NULL)
{
return (NULL);
}

ht->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

ht->size = size;
return (ht);
}
