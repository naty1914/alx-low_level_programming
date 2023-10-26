#include "main.h"

/**
 * print_binary - It prints the binary represenation of a number
 *@n: usngigned long integer
 *Return : nothing
 */

void print_binary(unsigned long int n)
{
int count;
int numb;
unsigned int value;

if (n == 0)
{
putchar('0');
return;
}

count = sizeof(n) * 8;
numb = 1;

while (count > 0)
{
value = (n >> (count - 1)) & 1;

if (value == 1)
numb = 0;

if (!numb)
putchar(value ? '1' : '0');

count--;
}
}




