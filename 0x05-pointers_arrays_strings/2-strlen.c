#include "main.h"
/**
* _strlen - returns the lenght of a string
*@s: pointer of character
*Return: the length of a string
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;
	return (length);
}
