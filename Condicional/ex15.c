#include <stdio.h>
#include <math.h>

int main(){

	float b, a, c, delta, x1, x2;

	printf("Entre com os numeres de B, A e C\n");
	printf("B: \n");
	scanf("%f", &b);
	printf("A: \n");
	scanf("%f", &a);
	printf("C: \n");
	scanf("%f", &c);

	delta = (b*b) - 4 * a * c;
	
	if(delta <= 0){
		printf("erro");
	}else{
		x1 = (-b + sqrt(delta)) / 2*a;
	
		x2 = (-b - sqrt(delta)) / 2*a;
	
		printf("\nX1: %.2f\n", x1);
		printf("\nX2: %.2f\n", x2);
	}

return 0;	
}
