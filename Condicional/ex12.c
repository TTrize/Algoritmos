#include <stdio.h>

int main(){

	float a, b;

	printf("Entre com dois numeros: \n");
	scanf("%f %f", &a, &b);

	if(a < b)
		printf("%.2f %.2f", a, b); 
	
	else
		printf("%.2f %.2f", b, a); 

	return 0;
}
