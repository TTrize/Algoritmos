#include <stdio.h>

int main(){

  int s;

  for(int i = 0; i <= 500 ; i++){
    if(i%2 != 0){
      s = s+i;
    }
  }
  printf("\nA soma dos impares é igual a : %d\n", s);

  return 0;
}
