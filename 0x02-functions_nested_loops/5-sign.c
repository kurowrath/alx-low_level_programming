#include "main.h"
/**
 * _isalpha - prints sign of number
 *
 * @n: checks input of a function
 *
 * Return: returns + if n > 0 , 0 if n = 0 , - if n < 0
 * */

int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar(43 + n );
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + n);
		return (0);
	}
	else
	{
		_putchar(45 + n);
		return (-1);
	}
return (0);
}