#include "search_algos.h"


/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: array to search the value in
 * @size: The size of the array
 * @value: The value to look for
 * Return: The  index where value is located  or -1 if not
 */


int binary_search(int *array, size_t size, int value)
{
size_t low, mid, high, i;
low = 0;
high = size - 1;
if (array == NULL)
	return (-1);
while (low <= high)
{
mid = (high + low) / 2;
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");
if (array[mid] == value)
{
return (mid);
}
if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;

}
return (-1);
}
