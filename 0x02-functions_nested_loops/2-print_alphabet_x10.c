#include "main.h"
/**
  *print_alphabet_x10 - function name
  *Return: 0
  */
void print_alphabet_x10(void)
{
char a;
int e;

for (e = 0; e <= 9; e++)
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
if (a == 'z'){
continue;
}
_putchar('\n');
}