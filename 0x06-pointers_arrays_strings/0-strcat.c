#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @src: Pointer to source string
 * @dest: Pointer to destination string
 * Return: Pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i]; i++)
		;
	k = i;

	for (i = k, j = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
