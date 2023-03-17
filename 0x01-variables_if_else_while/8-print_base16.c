#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all hexadecimals
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dec = 0;
	char hex[10];

	while (dec <= 15)
	{
		sprintf(hex,"%x",dec);
		printf("%s", hex);
		dec++;
	}
	putchar('\n');
return (0);	
}
