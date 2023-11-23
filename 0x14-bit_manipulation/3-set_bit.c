#include "main.h"

/**
 * set_bit - It sets a bit value of 1 at a specified index
 * @n: Pointer pointing to the unsigned int
 *@index: Index of the bit to set to 1  starting from 0
 *Return: 1 if it works or -1 if not worked
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int number;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
number = 1UL << index;
*n = *n | number;
return (1);

}

