#include "main.h"
/**
 * _strstr - Function to search for pairs of substrings
 * @needle: pairs of substring
 * @haystack: strings to search
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *strg = haystack;
		char *p = needle;

		while (*strg == *p && *p != '\0')
		{
			strg++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
