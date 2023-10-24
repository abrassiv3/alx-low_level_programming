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
return(0);
}
else if (r == 0){
_putchar('0');
return(0);
}
else{
_putchar('1');
return(1);
}
}