#include <stdio.h>

int main(){
  
  float x, s = 0;

  printf("Digite um valor para soma: \n");
  scanf("%f", &x);
  for(int i=1; i <= 3; i++){
    s = s + x/i;
  }
  printf("O valor de S = %f\n", s);

  return 0;
}

