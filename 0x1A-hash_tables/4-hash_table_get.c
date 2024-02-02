#include "hash_tables.h"


/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: The hash table to be looking into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t  *retrieve_node;
unsigned long int i;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

i = key_index((unsigned char *)key, ht->size);
retrieve_node = ht->array[i];

while (retrieve_node != NULL)
{
if (strcmp(retrieve_node->key, key) == 0)
{
return (retrieve_node->value);
}
retrieve_node = retrieve_node->next;
}
return (NULL);
}
