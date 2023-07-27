#include "main.h"
/**
 * cap_string - Function that capitalize words
 * @str: Pointer to the string its words going to be capitalized
 * Return: Pointer to the string
 */
char *cap_string(char *str)
{
	int i;

	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			if ((str[i - 1] == ' ') || (str[i - 1] == '\t') || (str[i - 1] == '\n')
			|| (str[i - 1] == ',') || (str[i - 1] == '.') || (str[i - 1] == '!')
			|| (str[i - 1] == '?') || (str[i - 1] == '"') || (str[i - 1] == '(')
			|| (str[i - 1] == ')') || (str[i - 1] == '{') || (str[i - 1] == '}')
			|| (str[i - 1] == ';'))
				str[i] -= 32;
	}
	return (str);


}
