#include "main.h"

/**
 *clear_bit - It sets a bit's value to 0 at a specified index
 *@n: pointer to unsigned long integer
 *@index: Bit index to be set to zero, starting from zero
 *Return: 1 or -1 if not worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int number;
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

number = 1UL << index;
*n = *n & (~number);

return (1);

}

