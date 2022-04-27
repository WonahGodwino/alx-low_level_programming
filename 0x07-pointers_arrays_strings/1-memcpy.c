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
int j = 0;
while (n != 0 && src != '\0')
	{
	dest[j] = src[j];
	j++;
	n--;
	}
return (dest)
}
