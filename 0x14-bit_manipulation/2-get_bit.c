#include "main.h"

/**
 *get_bit - A function that returns the value of a bit at a given index
 *@n: The unsigned long integer
 *@index: Is the index, starting from 0 of the bit you want to get
 *Return: The value of the bit at index the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int j;
int value;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);

}
j = 1UL << index;
value = (n & j) >> index;
return (value);

}
