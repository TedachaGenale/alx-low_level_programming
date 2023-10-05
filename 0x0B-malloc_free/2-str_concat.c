#include "main.h"
/**
 * str_concat - a function which concatenates two strings
 * and returns a pointer to its destination
 * @s1: pointer to the destination string
 * @s2: pointer to the source string
 * Return: pointer to the destination string if success
 * otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k, m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	str = malloc(sizeof(char) * (i + j + 1));

	if (!str)
		return (NULL);

	for (k = 0; k < i + 1; k++)
		str[k] = s1[k];
	for (m = 0, k = i; m < j + 1; m++, k++)
		str[k] = s2[m];
	str[k] = '\0';
	return (str);


}
