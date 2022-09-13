#include <stdio.h>

int main(){

	int a, b, m, s;
	printf("Entre com dois numeros inteiros: \n");
	scanf("%d %d", &a ,&b);

	m = a * 5;
	s = b + 10;

	printf("\nProduto: %d\nSoma: %d\n", m, s);

	return 0;

}
