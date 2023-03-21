#include "main.h"
/**
 * print_sign - prints sign of number
 *
 * @n: checks input of a function
 *
 * Return: returns + if n > 0 , 0 if n = 0 , - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
return (0);
}
