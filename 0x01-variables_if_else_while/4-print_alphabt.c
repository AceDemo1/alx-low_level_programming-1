#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value alphabet in lower case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
		putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
