#include "main.h"

/**
 *void print_alphabet_x10(void)
 */

void print_alphabet_x10(void)
{
int a, b;

for (a = 1; a < 11; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
