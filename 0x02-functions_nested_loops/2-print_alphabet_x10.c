#include "main.h"
/**
 * print_alphabet_x10 print alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
/*print_alphabeit_x10: Entry point*/
{
char c;
int i = 10;
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
