#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *@b: Pointer to a string of 0 and 1 chars
 *Return:The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int d = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] == '0')
{
d = d << 1;
}
else if (b[i] == '1')
{
d = (d << 1) | 1;
}
else
{
return (0);
}
i++;
}

return (d);
}
