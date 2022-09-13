#include <stdio.h>

int main(){

  int a, b, c;

  printf("Entre com dois numeros inteiros (A e B): \n");
  scanf("%d %d", &a, &b);

  c = a;
  a = b;
  b = c;

  printf("\nValores =  A: %d, B: %d\n", a, b);

  return 0;

}
