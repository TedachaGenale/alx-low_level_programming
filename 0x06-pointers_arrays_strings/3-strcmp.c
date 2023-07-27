#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: Always positive if s1 is greater
 * 0 if they are equal
 * Negative if s1 is less
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i]; i++)
	{
		j = s1[i] - s2[i];

		if (j != 0)
			break;
	}
	if (j == 0)
		j = s1[i] - s2[i];
	return (j);
}
