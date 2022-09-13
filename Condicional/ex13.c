#include <stdio.h>

int main(){

	int x, y, z;

	printf("Entre com 3 numeros: \n");
	scanf("%d %d %d", &x ,&y ,&z);


	if(x == y && x == z)
		printf("\nTriangulo Equilatero\n");
	else if(x == y || x == z || y == z)
		printf("\nTriangulo Isosceles\n");
	else
		printf("\nTriangulo Escaleno\n");

return 0;

}
