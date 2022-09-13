#include <stdio.h>

int main(){

	int d, c, m;
	float quant1, quant2, quant3, total;

	printf("Digite a quantidade de cada produto para comprar\n");
	printf("Produtos\n");
	printf("Danone R$5.00\nCheetos R$4.50\nMonster R$7.69\n");
	
	printf("Danone: \n");
	scanf("%d", &d);
	printf("Cheetos: \n");
        scanf("%d", &c);
	printf("Monster: \n");
        scanf("%d", &m);

	quant1 = 5.00 * d;
	quant2 = 4.50 * c;
	quant3 = 7.69 * m;
	total = quant1 + quant2 + quant3;

	printf("Produto: Danone\npreço unitario: R$5.00\nsubtotal: %.2f\n\n", quant1);
	printf("Produto: Cheetos\npreço unitario: R$4.50\nsubtotal: %.2f\n\n", quant2);
	printf("Produto: Monster\npreço unitario: R$7.69\nsubtotal: %.2f\n\n", quant3);
	printf("Total da compra: %.2f\n", total);

	return 0;
}

