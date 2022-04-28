#include "main.h"
/**
 * _strchr - Function to search for char in string
 * @s: input string
 * @c: string to search for
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}

