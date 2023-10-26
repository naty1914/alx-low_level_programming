#include "main.h"

/**
 *flip_bits - Returns the number of bits you would need to flip
 *@n: The first unsigned long integer
 *@m: The second unsigned long integer
 *Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned long int d;
d = n ^ m;

while (d)
{
i += d & 1;
d >>= 1;
}

return (i);

}
