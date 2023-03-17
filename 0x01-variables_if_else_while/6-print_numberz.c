#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digits from 0 to 10 without using char var no printf 
 *
 * Return: Alays 0 (Success)
*/

int main(void)
{
	int dj = 0;

	while (dj <= 9)
	{
		putchar((char)dj);
		dj++;
	}
	putchar('\n');
return (0);
}
