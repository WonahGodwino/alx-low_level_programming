#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int strl1;
	int strl2;

	strl1 = 0;

	while (dest[strl1] != 0)
	{
		strl1++;
	}

	strl2 = 0;

	while (src[strl2] != 0)
	{
		dest[strl1] = src[strl2];
		strl1++;
		strl2++;
	}
	return (dest);
}
