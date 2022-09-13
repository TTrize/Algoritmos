#include <stdio.h>
#define TAM 5
int main(){

  float num[5];

   for(int i=0; i<TAM; i++){
    printf("inserir valor: ");
    scanf("%f", &num[i]);
  }
   for(int i=0; i<TAM; i++){
    if(num[i] == 64){
      printf("\na posicao %d possui valor = 64\n", i);
    }
  }

return 0;
}
