#include "main.h"
/**
  *rev_string - function name
  *@s: function parameter
  */
void rev_string(char *s)
{
	int d;
	int c = 0;

	for (d = 0; s[d] != '\0'; d++)
		c++;
	for (d = 0; d < c / 2; d++)
		char j;

		j = s[d];
			s[d] = s[c - 1 - d];
			s[c - 1 - d] = j;
}
