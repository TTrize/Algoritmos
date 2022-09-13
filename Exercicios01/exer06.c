#include <stdio.h>
#include <string.h>
int main(){
	
	float a1, a2, a3;
	char str1[32];
	char str2[32];
       	char str3[32];

	printf("Entre com o nome e nota do aluno: \n");
	scanf("%s %f", str1, &a1);
	printf("\nEntre com o nome e nota do segundo aluno: \n");
	scanf("%s %f", str2, &a2);
	printf("\nEntre com o nome e nota do Terceiro aluno: \n");
	scanf("%s %f", str3, &a3);
	
	fflush(stdin);

	printf("%s\t |\t %.2f\n%s\t |\t %.2f\n%s\t |\t %.2f\n", str1,a1, str2,a2, str3,a3);

	return 0;

}
