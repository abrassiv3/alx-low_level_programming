#include "main.h"
/**
  *print_sign - function name
  *@r - Function parameter
  *Return: 0
  */
int print_sign(int r)
{
if (r < 0){
_putchar('-');
return(1);
}
else if (r == 0){
_putchar('0');
return(0);
}
else{
_putchar('+');
return(1);
}
}