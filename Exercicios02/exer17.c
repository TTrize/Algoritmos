#include <stdio.h>

int main(){
  //inclusao de variavel
  char nome[64];
  char apt;
  float taxa, consumo, total, subtotal;
  int diaria, diaria_unitaria, total_diaria;
  
  printf("\nInsira o o nome do cliente: \n");
  scanf("%[^\n]", nome);

  printf("\nQual o tipo do APTO?: \n");
  scanf(" %c", &apt);

  printf("\nDiarias do cliente: \n");
  scanf("%d", &diaria);

  printf("\nConsumo interno: \n");
  scanf("%f", &consumo);
  //separaçao de valores pela escolha do APTO.
  switch(apt){
    /*1-valor da diaria unitaria,
     * 2- calculo do total da diaria,
     * 3- subtotal entre total da diaria e consumo interno,
     * 4 - calculo de taxa dos funcionarios,
     * 5 - calculo do total.
     */
    case 'A':
      diaria_unitaria = 150;
      total_diaria = diaria * diaria_unitaria;
      subtotal = total_diaria + consumo;
      taxa = 150 * 10/100;
      total = taxa + total_diaria + consumo;
      break;
    
    case 'B':
      diaria_unitaria = 100; 
      total_diaria = diaria * diaria_unitaria;
      subtotal = total_diaria + consumo;
      taxa = 100 * 10/100;
      total = taxa + total_diaria + consumo;
      break;
    
    case 'C':
      diaria_unitaria = 75;
      total_diaria = diaria * diaria_unitaria;
      subtotal = total_diaria + consumo;
      taxa = 75 * 10/100;
      total = taxa + total_diaria + consumo;
      break;
    
    case 'D':
      diaria_unitaria = 50;
      total_diaria = diaria * diaria_unitaria;
      subtotal = total_diaria + consumo;
      taxa = 50 * 10/100;
      total = taxa + total_diaria + consumo;
      break;
    
    defalt:
      printf("\nErro na seleção\n");
      break;
  }
  
  printf("Nome do cliente: %s\nTipo de APTO: %c\nDiarias utilizadas: %d\nValor unitário da diaria: %d\nValor total das diaria: %d\nValor do consumo interno: %.2f\nSubtotal: %.2f\nValor da Taxa de serviço: %.2f\nTotal geral: %.2f\n",nome, apt, diaria, diaria_unitaria, total_diaria, consumo, subtotal, taxa, total);

return 0;

}
