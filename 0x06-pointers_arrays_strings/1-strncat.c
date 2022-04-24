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
	int firstword;
	int secondcounter;

	firstcounter = 0;

	while (dest[firstcounter] != 0)
	{
		firstcounter++;
	}

	secondcounter = 0;

	while (src[secondcounter] != 0)
	{
		dest[firstcounter] = src[secondcounter];
		firstcounter++;
		secondcounter++;
	}
	return (dest);
}
