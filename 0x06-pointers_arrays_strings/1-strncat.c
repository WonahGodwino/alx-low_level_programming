#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int firstcount = 0, secondcount = 0;

	while (*(dest + firstcount) != '\0')
	{
		firstcount++;
	}

	while (secondcount < n)
	{
		*(dest + firstcount) = *(src + secondcount);
		if (*(src + secondcount) == '\0')
			break;
		firstcount++;
		secondcount2++;
	}
	return (dest);
}
