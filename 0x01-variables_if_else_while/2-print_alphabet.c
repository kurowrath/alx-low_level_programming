#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: printing lowercase alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
return (0);
}