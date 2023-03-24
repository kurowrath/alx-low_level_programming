#include "main.h"

/**
 * print_numbers - print from 0 - 9
 *
 * Return: Always 0(Success)
*/

void print_numbers(void)
{
	int i = 0;

	while (i <=9) 
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
