#include <stdio.h>

int main(){

  int idade, i, soma=0;
  float media;

  for(i=0; ;i++){
        idade = 0;
        printf("Digite uma idade\n");
        scanf("%d", &idade);
        soma = soma + idade;
        
        if(idade != 0 || idade < 0) continue;
        else{ 
          media = soma/i;
          printf("\nMedia: %.2f\n", media);  
          break;
        }

}
return 0;
}

