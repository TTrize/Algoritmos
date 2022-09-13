#include <stdio.h>

#define LIM 20

int main(){

  int N[LIM];
  int sum, i;

  for(i=0; i < LIM; i++){
    
    printf("\nInsira o valor para a somatoria: ");
    scanf("%d", &N[i]);

    sum += N[i];
  
  }
  printf("\nA soma de N: %d\n", sum);

return 0;
}
