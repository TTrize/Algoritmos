#include <stdio.h>

int main(){

	float F, C;

	printf("Enter Fahrenheit: \n");
	scanf("%f", &F);

	C = (F-32)*5/9;

	printf("Fahrenheit for Celcius %.2f\n", C);

	return 0;

}
