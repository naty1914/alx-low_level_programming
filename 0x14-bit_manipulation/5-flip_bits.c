#include "main.h"

/**
 * flip_bits - Returns the number of bits that must be flipped
 *@n: The initial unsigned long int
 *@m: Second unsigned long integer
 *Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flip = 0;
unsigned long int number;
number = n ^ m;

while (number)
{
flip += number & 1;
number >>= 1;
}

return (flip);

}

