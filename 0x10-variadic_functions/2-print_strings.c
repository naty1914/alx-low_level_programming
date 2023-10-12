#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: string to separete two strings
 * @n:  number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
const char *str;
va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
{
str = va_arg(list, const char *);

if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);

}
}


printf("\n");

va_end(list);
}
