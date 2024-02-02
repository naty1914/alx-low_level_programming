#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table,or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashTable = NULL;
unsigned long int i;


hashTable = malloc(sizeof(hash_table_t));
if (hashTable == NULL)
{
return (NULL);
}
hashTable->size = size;
hashTable->array = malloc(sizeof(hash_node_t *) * size);
if (hashTable->array == NULL)
{
free(hashTable);
return (NULL);
}

for (i = 0; i < size; i++)
{
hashTable->array[i] = NULL;

}
return (hashTable);

}
