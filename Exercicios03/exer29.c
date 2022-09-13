#include <stdio.h>

int main(){

  int i, x, s=0;
  printf("Insira um numero natural: ");
  scanf("%d", &x);
  for(i=1; i <= x; i++){
    s+=i;
  }
  printf("\nA soma: %d\n", s);

}
