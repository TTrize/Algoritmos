#include <stdio.h>

int main(){

	int funcionario;
        float salario, novo, total;
	printf("Digite o código do funcionário: \n");
	scanf("%d", &funcionario);
	printf("Digite o salário do funcionário: \n");
	scanf("%f", &salario);

	if(funcionario == 1){
	
		novo = salario * 50/100;
		total = salario + novo;

		printf("\nEscriturário\n");
		printf("\nAumento em 50%%\n");
		printf("\nNovo salário: %.2f \n", total); 

	}
	else if(funcionario == 2){
	        novo = salario * 35/100;
                total = salario + novo;

                printf("\nSecretário\n");
                printf("\nAumento em 35%%\n");
                printf("\nNovo salário: %.2f \n", total); 
	}
	else if(funcionario == 3){
		novo = salario * 20/100;
                total = salario + novo;

                printf("\nCaixa\n");
                printf("\nAumento em 20%%\n");
                printf("\nNovo salário: %.2f \n", total); 
	}
	else if(funcionario == 4){
	        novo = salario * 10/100;
                total = salario + novo;

                printf("\nGerente\n");
                printf("\nAumento em 10%%\n");
                printf("\nNovo salário: %.2f \n", total);	
	}
	else if(funcionario == 5){
                printf("\nDiretor\n");
                printf("\nAumento em 0%%\n");
                printf("\nNovo salário: %.2f \n", salario);
	
	}
return 0;

}
