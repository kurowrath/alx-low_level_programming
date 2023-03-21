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
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
return (0);
}
