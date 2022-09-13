#include <stdio.h>

int main(){

	int a, b, c;

	printf("\nEntre com 3 numeros inteiros: \n");
        scanf("%d %d %d", &a, &b, &c);
	
	if(a > c) {
		int m;
		m = c;
		c = a;
		a = m;
	}
	if(a > b){
		int m;
		m = b;
		b = a;
		a = m;
	}
	if(b > c){
		int m;
		m = c;
		c = b;
		b = m;
	}
	printf("\n%d %d %d\n", a ,b ,c);

return 0;
}
