#include "main.h"

/**
 * print_last_digit - prints last digit
 *
*/



int print_last_digit(int)
{
	int n;
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
	}
	else
	{
		r = n % 10;

	}
	_putchar(0 + r);
	return (r);
}
