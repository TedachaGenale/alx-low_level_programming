#include <stdio.h>
/**
 * main - main function
 * Return: always 0 if success
 */
int main(void)
{
	char c;


	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	for (c = 65; c < 91; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
