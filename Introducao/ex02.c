#include <stdio.h>

int main(){


	float salary, addition;
	printf("Entre com o seu salario:\n");
	scanf("%f", &salary);
	//calc for new salary 25% increase	
	addition = salary/100*25;
	salary += addition;


	printf("Novo salario: %.2f\n", salary);

	return 0;

}
