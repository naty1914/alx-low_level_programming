#include "hash_tables.h"


/**
 * hash_table_delete - Deletes a hash table
 * @ht: Is the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *ptr_node, *temp_node;
unsigned long int x;

if (ht == NULL)
return;

for (x = 0; x < ht->size; x++)
{
ptr_node = ht->array[x];

while (ptr_node != NULL)
{
temp_node = ptr_node;
ptr_node = ptr_node->next;

free(temp_node->key);
free(temp_node->value);
free(temp_node);
}
}


free(ht->array);
free(ht);

}
