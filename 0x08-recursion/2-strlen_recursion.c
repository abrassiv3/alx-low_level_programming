#include "main.h"
/**
  *_strlen_recursion - function name
  *@s: function parameter
  * Return: r
  */
int _strlen_recursion(char *s)
{
	int r;

	if (*s != '\0')
	{
		r++;
		_strlen_recursion(s + 1);
	}
	return (r);
}
