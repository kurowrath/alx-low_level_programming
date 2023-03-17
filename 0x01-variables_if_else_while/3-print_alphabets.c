#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: printing lowercase alphabet and uppercase alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

        	char cu = 'A';

	while (cu <= 'Z')
	{
		putchar(cu);
		cu++;
	}
	putchar('\n');
	
	
return (0);
}
