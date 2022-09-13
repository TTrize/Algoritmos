#include <stdio.h>

int main(){

	float MP, MT, ME, MF;
	printf("Entre com a MP: \n");
	scanf("%f", &MP);
	printf("Entre com a MT: \n");
        scanf("%f", &MT);
	printf("Entre com a ME: \n");
        scanf("%f", &ME);

	MF = 0.7*MP + 0.2*MT + 0.1*ME;

	printf("Media final: %.2f\n", MF);

return 0;

}
