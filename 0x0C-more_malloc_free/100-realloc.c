#include "main.h"

/**
 * _realloc - Function that reallocates amemory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size of ptr
 * @new_size: The size of reallocated space
 * Return: Pointer to the new space if success
 * NULL if not success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *hstr = (char *)ptr;
	char *nstr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr == NULL)
	{
		nstr = malloc(new_size);
		if (nstr == NULL)
			return (NULL);
		if (ptr != NULL)
		{
			for (i = 0; i < old_size; i++)
				nstr[i] = hstr[i];
		}
	}
	else if (new_size == old_size)
		return (ptr);
	free(ptr);
	return (nstr);
}
