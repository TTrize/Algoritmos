#include <stdio.h>

int main(){

	int num;
	printf("Insira um número: \n");
	scanf("%d", &num);

	if(num == 0)
		printf("\n%d igual a zero\n", num);
	else if(num > 0)
		printf("\n%d maior que zero\n", num);
	else
		printf("\n%d menor que zero\n", num);

return 0;
}
