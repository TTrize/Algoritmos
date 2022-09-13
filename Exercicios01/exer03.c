#include <stdio.h>

int main(){

	float R, C, pi = 3.1415;

	printf("Enter R: \n");
	scanf("%f", &R);

	C = (pi * pi) * R;

	printf("Circunference: %.2f\n", C);

	return 0;

}
