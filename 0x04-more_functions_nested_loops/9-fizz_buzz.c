
#include <stdio.h>

int main(void)
{
int r;

for (r = 0; r <= 100; r++){
if (r > 0 && r % 3 == 0){
printf("Fizz ");
}
else if (r > 0 && r%5 == 0){
printf("Buzz ");
}
else{
printf("%d ", r);
}
}
printf("\n");

return(0);
}