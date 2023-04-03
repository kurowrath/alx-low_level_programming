/**
 * _memset - it  fills memory with a constant byte
 *
 * @s: input pointer to char type
 *    represents the pointer to the
 *    block of memory to fill
 * @b: input var of char type
 *    represents the character to
 *    fill the s
 * @n: unsigned int var the number of bytes to be filled
 *
 * Return: A pointer to the filled memory @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int i
	 * because we are storing a
	 * value that will always be
	 * non-negative (>= 0)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

