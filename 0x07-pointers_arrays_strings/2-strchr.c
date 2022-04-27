#include "main.h"
/**
 * _strchr - Function to search for char in string
 * @s: input string
 * @c: string to search for
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while(s[i] >= '\0')
	{
		if (s[i] == c)
			{
			return (&s[i]);
			}
		i++
	}
	return (0);
