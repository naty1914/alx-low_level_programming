#include "main.h"

/**
 *get_bit - A function that returns the bit value at a particular index
 *@n:  unsigned long int
 *@index: Is the index of the bit you want to obtain, beginning at 0
 *Return: The value of the bit at  the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int number;
int bitvalue;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);

}
number = 1UL << index;
bitvalue = (n & number) >> index;
return (bitvalue);

}

