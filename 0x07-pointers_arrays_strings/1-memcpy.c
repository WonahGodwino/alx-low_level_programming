#include "main.h"
/**
 * _memcpy - copies n bytes from memory area
 * @dest: memory to copy address to
 * @src: the memory address to copy address from
 * @n: size of bytes to copy
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int size;

	size = n;
	for (j = 0; j < size; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest)
}