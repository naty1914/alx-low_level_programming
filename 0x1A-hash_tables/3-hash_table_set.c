#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: Is the key  can not be an empty string
 * @value: Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *add_node, *update_node;
unsigned long int i;
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}
i = key_index((unsigned char *)key, ht->size);
update_node = ht->array[i];

while (update_node != NULL)
{
if (strcmp(update_node->key, key) == 0)
{
free(update_node->value);
update_node->value = strdup(value);
if (update_node->value == NULL)
{
free(update_node);
return (0);
}
return (1);
}
update_node = update_node->next;
}
add_node = malloc(sizeof(hash_node_t));
if (add_node == NULL)
return (0);

add_node->key = strdup(key);
add_node->value = strdup(value);
if (add_node->key == NULL || add_node->value == NULL)
{
free(add_node->key);
free(add_node->value);
free(add_node);
return (0);
}
add_node->next = ht->array[i];
ht->array[i] = add_node;
return (1);
}
