#include "hash_tables.h"
/**
 * hash_djb2 - Is the hash function using the djb2 algorithm
 * @str: The input string
 * Return: The calculated hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;

while ((c = *str++))
{
hash = ((hash << 5) + hash)+c;
}

return (hash);
}
