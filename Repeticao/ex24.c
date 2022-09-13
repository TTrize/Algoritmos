#include <stdio.h>

int main(){

  int num, a=0, b=0, c=0;
  printf("\nO numero positivo em que: N/3 resto 2, N/5 resto 3 e N/7 resto 4\n");

  for(num = 1; num > 0 ; num++){
  
    a = num%3;
    b = num%5;
    c = num%7;

    if(a == 2 && b == 3 && c == 4)break;

  }
  printf("\n o numero inteiro positivo: %d\n", num);
  return 0;
}
