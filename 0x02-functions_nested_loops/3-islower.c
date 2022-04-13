#include "main.h"
/**
*_islower-check if characher lowercase
*@c:charcter to check the case
*return: 1 if character is lowercase, 0 otherwise
*/
int _islower(int c)
/*_islower: Entry poin*/
{
/*returns 1 if c is lowercase returns 0 otherwise*/
return (c >= 97 && c <= 122);
}
