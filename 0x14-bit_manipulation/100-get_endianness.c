#include "main.h"


/**
 *get_endianness - It checks the endianness
 *Return: 0 if it it's big endian, 1 if it's little endian
 */

int get_endianness(void)
{
unsigned char *i = (unsigned char *)&i;

if (*i == 1)
{
return (1);
}

else
return (0);

}

