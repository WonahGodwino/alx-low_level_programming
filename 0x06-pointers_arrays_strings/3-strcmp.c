#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
	int textcontent = 0;
	int textdif = 0;

	while (s1[textcontent] != '\0' && textdif == 0)
	{
		textdif = s1[textcontent] - s2[textcontent];
		textcontent++;
	}
	return (textdif);
}
