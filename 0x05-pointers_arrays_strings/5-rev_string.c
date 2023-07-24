#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int i, j, k, tmp;

	for (i = 0; s[i]; i++)
		;
	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			tmp = s[k];
			s[k] = s[k - 1];
			s[k - 1] = tmp;
		}
	}
}
