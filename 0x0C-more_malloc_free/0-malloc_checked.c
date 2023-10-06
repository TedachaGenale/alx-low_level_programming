#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of the argument
 * Return: pointer to the allocated memory if success
 * Otherwise terminate with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
