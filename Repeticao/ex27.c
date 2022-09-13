#include <stdio.h>

int main(){

	int num, m=0;

	for(int i = 0; i < 100; i++){
		scanf("%d", &num);
		if(m < num){
			m = num;
		}
	}
	printf(" maior valor inteiro: %d", m);

	return 0;
}
