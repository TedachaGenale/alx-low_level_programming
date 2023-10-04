#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: size of the array
 * @c: element of the array
 * Return: a pointer to the array if success
 * otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
