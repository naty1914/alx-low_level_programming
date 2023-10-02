#include "main.h"

/**
 * _puts - a fucntion that prints a string followed by a new line
 *
 *@str: the string to print
 *
 */


void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
