#include <stdio.h>
#include <math.h>
int main(){

  int x, i=1, exp=0, c=1;
  float soma = 1;

  printf("insira o valor de x\n");
  scanf("%d", &x);
  
  while(i <= 15){
    i++;
    c += 1;
    exp = pow(x, c);
    soma += exp/i;
  }
  
    printf("\na soma:%.2f\n", soma);

  return 0;

}
