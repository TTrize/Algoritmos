#include <stdio.h>

int main(){

	float B, H, A;

	printf("Enter with Base and High");
	scanf("%f %f", &B, &H);

	A = (B*H)/2;

	printf("Area: %.2f", A);

	return 0;
}
