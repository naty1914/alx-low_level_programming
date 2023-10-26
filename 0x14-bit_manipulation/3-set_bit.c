#include "main.h"

/**
 * set_bit - it sets the value of a bit 1 at a given index
 * @n: Pointer to the unsgined integer
 *@index: Index of the bit to set to 1  starting from 0
 *Return: 1 or -1 if not worked
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int d;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
d = 1UL << index;
*n = *n | d;
return (1);

}
