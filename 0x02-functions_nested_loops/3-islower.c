#include "main.h"
/**
  *_islower - function name
  *@c - function parameter
  *Return: 0
  */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}