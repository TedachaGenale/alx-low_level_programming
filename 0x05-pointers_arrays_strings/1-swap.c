#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers
 * @a: First integer pointer
 * @b: Pointer for second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
