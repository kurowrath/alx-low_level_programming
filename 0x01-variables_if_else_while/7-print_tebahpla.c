#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints reverse alphbet
 *
 *Return: Always 0 (Success) 
*/
int main(void)
{
	char c = 'z';

	while ( c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
return (0);
}
