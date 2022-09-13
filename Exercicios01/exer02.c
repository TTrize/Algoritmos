#include <stdio.h>

int main(){

	int num1;

	printf("Enter interger num: \n");
	scanf("%d", &num1);

	num1 += num1;

	printf("Double number: %d\n", num1);

	return 0;
}
