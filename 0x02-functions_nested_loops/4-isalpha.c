#include "main.h"
/** _isalphabet - checkif a character is alphabet
 * @c: the character to be ckecked
 * Return: 1 if character is letter or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || ( c >= 65 && c <= 90));
