#include "main.h"
/**
 * print_alphabet - prints alphabets using function _putchar
 *
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
