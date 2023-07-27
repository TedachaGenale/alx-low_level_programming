#include "main.h"
/**
 * string_toupper - Function that changes all lowercase of a string
 * @str: Pointer to the string
 * Return: Converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
