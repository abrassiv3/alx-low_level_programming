#include "main.h"
/**
  *print_alphabet_x10 - function name
  *Return: 0
  */
void print_alphabet_x10(void)
{
	char a;
	int e = 0;

	while (e++ <= 9) {
		for (a = 'a'; a <= 'z'; a++) {
			_putchar(a);
		if (a == 'z') {
			_putchar('\n'); }}}
}
