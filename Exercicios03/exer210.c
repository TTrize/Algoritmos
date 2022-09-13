#include <stdio.h>

int main(){

  int N, fib=1, aux=1, res=0;

  printf("Entre com um numero maior ou igual a 2:\n");
  scanf("%d", &N);

  for(int i=1; i <= N; i++){
    
    if(i==1){
      printf("0 ");
    }
    else {
      if(i==2 || i==3){
      printf(",1 ");
      }
      else{
        res = fib + aux;
        fib = aux;
        aux = res;
        printf(",");
        printf("%d ", res);
    }
    }
  }
  printf("\n"); 
  return 0;
}
