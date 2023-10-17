#include "main.h"
/**
 * _strlen - function name
 * @s: parameters
 * return: length of string
 */
int _strlen(char *s)
{
	int v;
	int sum = 0;

	for (v = 0; s[v] != '\0'; v++)
		sum++;
	return (sum);
}
