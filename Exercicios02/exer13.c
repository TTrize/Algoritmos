#include <stdio.h>

int main(){
	
	int cod;
	float pre, quant, total;
	printf("\ninsira o código do consumidor: \n");
	scanf("%d", &cod);

	printf("Entre com o preço do kwh: \n");
	scanf("%f", &pre);

	printf("Entre com a quantidade de kwh: \n");
	scanf("%f", &quant);

	total = pre * quant;
  
  if(total < 11.20){
    total = 11.20;
    printf("\nCódigo do cliente: %d\nTotal a pagar minimo R$%.2f\n", cod, total);
  }
  else{
	  printf("\nCódigo do cliente: %d\nTotal a pagar R$%.2f\n", cod, total);
  }
}
