#include <stdio.h>

int main(){

	int x1, x2, x3;
	float p1, p2, p3, m;

	printf("Enter avaliation values: \n");
	scanf("%d %d %d", &x1 ,&x2, &x3);
	printf("Enter student point: \n");
	scanf("%f %f %f", &p1, &p2, &p3);

	m = ((p1*x1) + (p2*x2) + (p3*x3)) / (x1 + x2 + x3);

	printf("\nMedia: %.2f\n", m);

	return 0;


}
