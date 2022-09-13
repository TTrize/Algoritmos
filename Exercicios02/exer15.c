#include <stdio.h>

int main(){

  float salario, novo;
  char str[64];

  printf("Nome do jogador: \n");
  scanf("%s", str);

  printf("\nSalario do Jogador: \n");
  scanf("%f", &salario);

  if(salario <= 1000){
    float aum;
    aum = salario * 20/100;
    novo = salario + aum;
  }
  if(salario > 1000 && salario <= 5000){
    float aum;
    aum = salario * 10/100;
    novo = salario + aum;
  }
  
  printf("\nNome: %s\nSalario: %.2f\nSalario Novo: %.2f\n", str, salario, novo);

  return 0;
}
