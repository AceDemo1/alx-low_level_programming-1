#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * (n % 10);
	}
	else
	{
		ld = n % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
