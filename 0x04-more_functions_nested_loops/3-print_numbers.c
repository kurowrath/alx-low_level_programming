#include "main.h"

/**
 * print_numbers - print from 0to 9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9) 
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
