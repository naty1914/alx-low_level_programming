#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 1 if it's a little endian , 0 if it's a big endian
 *
 */

int get_endianness(void)
{
unsigned int value = 1;
char *ptr = (char *)&value;
if (*ptr == 1)
{
return (1);
}

else
{
return (0);
}

}

