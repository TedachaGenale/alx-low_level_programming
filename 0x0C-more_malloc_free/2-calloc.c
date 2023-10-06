#include "main.h"

/**
 * _calloc - Function that allocates memory
 * @nmemb: Number of elements of the array
 * @size: Storage size of each element
 * Return: Pointer to the allocated space if success
 * NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);

	if (!str)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
		str[j] = 0;
	return (str);
}
