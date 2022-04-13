#include "main.h"
/**
*_islower-check for lower case letter
*@c:charcter to check the case
*return: 1 if character is lowercase 0 otherwise
*/
int _islower(int c)
/*_islower: Entry point check for lower case letter*/
{
/*returns 1 if c is lowercase returns 0 otherwise*/
return (c >= 97 && c <= 122);
}
