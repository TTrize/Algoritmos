#include <stdio.h>

int main(){
  
  float R, pi = 3.1415, area;

  printf("Entre com o Raio: \n");
  scanf("%f", &R);
  
  area = pi * (R*R);


  printf("Aria do circulo = %.2f\n", area);

  return 0;
}
