#include "main.h"

/**
 * argstostr - Function that concatenates all arguments
 * @ac: Counter for the number of arguments
 * @av: Pointers to the strings of aruments
 * Return: Pointer to the new string if success
 * NULL if not success
 */
char *argstostr(int ac, char **av)
{
	int i, size = 0, j, k = 0;
	char *nptr;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i <  ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size += ac;

	nptr = malloc(sizeof(char) * (size +  1));
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			nptr[k] = av[i][j];
			k++;
		}
		if (nptr[k] == '\0')
			nptr[k++] = '\n';
	}
	return (nptr);
}
