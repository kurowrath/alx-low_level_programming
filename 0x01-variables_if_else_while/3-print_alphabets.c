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
	char cup = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (cup <= 'Z')
	{
		putchar(cup);
		cup++;
	}
	putchar('\n');
return (0);
}
