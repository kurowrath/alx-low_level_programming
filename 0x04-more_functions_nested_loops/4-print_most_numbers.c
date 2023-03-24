#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * 		from 2 and 4
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i = 0;

	while(i >= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar( i + 48);
		}
		i++;
	}
	_putchar('\n');
}