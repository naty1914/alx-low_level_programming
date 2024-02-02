#include "hash_tables.h"


/**
 * hash_table_print - Prints a hash table
 * @ht: Is the hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *ptr_node;
unsigned long int x;
int first = 1;
if (ht == NULL)
return;

printf("{");
for (x = 0; x < ht->size; x++)
{
ptr_node = ht->array[x];
while (ptr_node != NULL)
{

if (!first)
printf(", ");

printf("'%s': '%s'", ptr_node->key, ptr_node->value);

first = 0;

ptr_node = ptr_node->next;

}


}
printf("}\n");

}
