#include <stdio.h>

int main(){
	
	int n, i, fat;
	
	scanf("%d", &n);
	
	
	while(i != 1){
		i = n--;
		fat = fat * i;
		printf("\n%d\n", i);
	}
	printf("\n%d\n", fat);
}
