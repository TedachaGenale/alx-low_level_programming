#include "main.h"
/**
 * _strlen - a function which return the string length
 * @s: string to be returned its length
 * Return: the string length if success
 * otherwise zero
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strdup -  a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to the new string if success
 * otherwise NULL.
 */

char *_strdup(char *str)
{
	char *ptr;
	size_t size, i;

	if (str == NULL)
		return (NULL);
	size = _strlen(str) + 1;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);


}
