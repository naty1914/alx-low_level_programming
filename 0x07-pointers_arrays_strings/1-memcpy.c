#include "main.h"
/**
 *_memcpy -    a function that copies memory area
 *@dest: area where bytes are copied to
 *@src: area where bytes are copied from
 *@n: bytes of the memory
 *Return:a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	}

	return (dest);
}
