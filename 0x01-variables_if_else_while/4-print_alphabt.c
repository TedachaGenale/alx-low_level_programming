#include <stdio.h>
/**
 * main - main function
 * Return: always 0 if success
 */
int main(void)
{
	char b;

	b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
