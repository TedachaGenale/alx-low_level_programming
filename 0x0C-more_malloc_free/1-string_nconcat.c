#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of character to be copied
 * Return: pointer shall point to a newly allocated space in memory if success
 * Otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; s1[k]; k++)
		str[k] = s1[k];
	for (i = k, j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
