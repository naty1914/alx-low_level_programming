#include "main.h"

/**
 * print_binary - Prints a number's binary representation
 * @n: unsigned long int
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
int bitcount;
int numb;
unsigned int bitvalue;

if (n == 0)
{
putchar('0');
return;
}

bitcount = sizeof(n) * 8;
numb = 1;

for (; bitcount > 0; bitcount--)
{
bitvalue = (n >> (bitcount - 1)) & 1;

if (bitvalue == 1)
numb = 0;

if (!numb)
putchar(bitvalue ? '1' : '0');

}
}

