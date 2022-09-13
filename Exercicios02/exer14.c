#include <stdio.h>

int main(){

	float peso, altura, massa;
	printf("\nInsira seu peso\n");
	scanf("%f", &peso);
	printf("\nInsira sua altura\n");
	scanf("%f", &altura);

	massa = peso / (altura * altura);

	printf("\nseu IMC: %.0f\n", massa);
	printf("--------------------");
	printf("\nGrau de Obesidade:\n");
	if(massa < 26)
		printf("Normal\n");
	if(massa >= 26 && massa < 30)
		printf("Obeso\n");
	if(massa >= 30)
		printf("Obeso Mórbido\n");

return 0;

}
