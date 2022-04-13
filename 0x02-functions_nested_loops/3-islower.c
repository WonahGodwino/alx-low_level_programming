#include "main.h"
/**
 *_islower-check for lower case letter
 *@c:charcter to check the case
 * return:0 or 1
 */
int _islower(int c)
/* _islower: Entry point check ofr lower case letter*/
{
/*returns 1 if c is lower case returns 0 otherwise*/
return (c >= 97 && c <= 122);
}
