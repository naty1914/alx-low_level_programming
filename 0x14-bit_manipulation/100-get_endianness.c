#include "main.h"


/**
 *get_endianness - It checks the endianness
 *Return: 0 if it it's big endian, 1 if it's little endian
 */

int get_endianness(void)
{
unsigned int i = 1;
char *j = (char *)&i;
if (*j == 1)
{
return (1);
}

else
return (0);

}
