#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: pointer to the string to be searched
 * @c: Pointer to the character to be searched from the string
 * Return:Pointer to the character if success
 * NULL if fail
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}
