#include "main.h"
/**
 *print_alphabet_x10:Entry Point 
 *Return: void
 */
void print_alphabet_x10(void)
/*print_alphabeit_x10: Entry point*/
{
char c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
