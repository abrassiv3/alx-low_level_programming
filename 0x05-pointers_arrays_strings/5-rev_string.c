#include "main.h"
/**
  * rev_string - function name
  * @s: function parameter
  *
  */
void rev_string(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
		sum++;
	for (i = 0; i < sum / 2; i++)
		char j;

		j = s[i];
			s[i] = s[sum - 1 - i];
			s[sum - 1 - i] = j;
}
