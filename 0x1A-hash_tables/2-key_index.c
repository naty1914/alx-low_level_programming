#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in a hash table array
 * @key: Is the key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int Hash_value;
if (key == NULL || size == 0)
{
return (0);
}
Hash_value = hash_djb2(key) % size;

return (Hash_value);
}
