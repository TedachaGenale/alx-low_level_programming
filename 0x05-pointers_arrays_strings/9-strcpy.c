#include "main.h"
/**
 * _strcpy - Write a function that copies the string
 * @dest: Pointer to the string to which to be copied
 * @src: Pointer from which to be copied
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
