#include "main.h"

/**
 *clear_bit - It sets the value of a bit to 0 at a given index
 *@n: pointer to unsigned long integer
 *@index: Index of the bit to set to 0, starting from 0
 *Return: 1 or -1 if not worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int d;
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

d = 1UL << index;
*n = *n & (~d);

return (1);

}
