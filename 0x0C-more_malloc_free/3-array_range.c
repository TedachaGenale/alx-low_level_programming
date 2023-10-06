#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: The smallest element of the array
 * @max: The largest element of the array
 * Return: Pointer to the newly created array if success
 * NULL if fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);
	for (i = min, j = 0; i <= max; j++, i++)
		array[j] = i;
	return (array);
}
