#include "main.h"

/**
 * binary_to_uint - Changes a binary number into an unsigned int
 *@b: Pointer to a string with the characters 0 and 1
 *Return: unsigned int or  0
 */
unsigned int binary_to_uint(const char *b)
{
int j = 0;
unsigned int num = 0;
if (b == NULL)
return (0);
while (b[j] != '\0')
{

if (b[j] == '1')
{
num = (num << 1) | 1;
}
else if (b[j] == '0')
{
num = num << 1;
}
else
{
return (0);
}
j++;
}

return (num);
}
