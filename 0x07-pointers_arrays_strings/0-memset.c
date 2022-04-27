#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: Address of memory to be filled
 *@b: Value to use for filling
 *@n: Size of bytes to be changed
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	while (n > 0)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
