#include <stdio.h>

int main(){

  float n1, n2, m;

  printf("Insira o primeiro numero e o segundo: \n");
  scanf("%f %f", &n1, &n2);

  m = ((n1 * 6) + (n2 * 4))/10;

  printf("\nmedia: %.1f\n", m); 

}  
