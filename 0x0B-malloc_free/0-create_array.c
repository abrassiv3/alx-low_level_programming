#include "main.h"
#include <stdlib.h>
/**
  * create_array - function name
  * @size: array size
  * @c: initial char
  * Return: NULL if size = 0, NULL if fails, else pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;
	
	if size = 0
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s = '\0')
		return (NULL);

	for (n = 0; n < size; n++)
		s[n] = c;

	return (s);
}
