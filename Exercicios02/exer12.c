#include <stdio.h>

int main(){

	float a, b;
	
	printf("\nInsira dois numeros: \n");
	scanf("%f %f", &a,&b);

	if(a > b)
		printf("%.2f\n", a);
	else
		printf("%.2f\n", b);

return 0;

}
