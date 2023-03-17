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
        char cu = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (cu <= 'Z')
	{
		putchar(cu);
		cu++;
	}
	putchar('\n');
return (0);
}
