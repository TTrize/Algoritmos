#include <stdio.h>


int main(){

  int a=0, b=1, c=2, N, M=0;  
   while(1){
    printf("Digite um numero inteiro\n");
    scanf("%d", &N);
    while(N != M){
      a++;
      b++;
      c++;
      M = a*b*c;
      if(M > N){
        printf("nao eh triangular\n");
        break;
      }
    }
    if(N == M){
      break;
    }
   }
    printf("\n%d é um numero triangular de %d %d %d\n", N,a,b,c);

  return 0;
}


