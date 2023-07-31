#include "main.h"

/**
 *set_string - Function that sets the value of a pointer to a char
 *@s: Pointer to the string to be setted
 *@to: Pointer to be setted with
 */

void set_string(char **s, char *to)
{
	*s = to;
}
