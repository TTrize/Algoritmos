#include <stdio.h>

int main(){
  
  int i;
  float num, soma=0;

  for(i=0; i < 10; i++){
    num = 0;
    printf("Digite um numero: ");
    scanf("%f", &num);

    soma += num;
 }
  printf("\nA soma dos numeros: %.2f\n", soma);

 return 0;
}
