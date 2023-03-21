#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
*/



void print_alphabet_x10(void)
{
	char i = 1 ;

	while ( i <= 10 )
	{
		int j = 'a';
		while(j <= 'z' )
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
