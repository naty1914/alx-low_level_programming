#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - executes a function on each element of an array
*@array: array to iterate
*@size: size of the array
*@action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < (int)size; i++)
{
action(array[i]);
}
}
}
