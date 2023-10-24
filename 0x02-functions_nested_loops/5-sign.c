#include "main.h"
/**
  *print_sign - function name
  *@r - Function parameter
  *Return: 0
  */
int print_sign(int r)
{
if (r < 0){
return (-1);
_putchar('-');
}
else if (r == 0){
return (0);
_putchar(0);
}
else{
return (1);
_putchar('+');
}
}