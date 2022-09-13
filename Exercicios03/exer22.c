#include <stdio.h>

int main(void){

  int fulano = 150, ciclano = 110;
  int anos=0, c1, c2;
  
  c1 = ciclano;
  c2 = fulano;

  for(int i=1; ciclano < fulano; i++){
    c1 += 3;
    c2 += 2;
    anos = i;
      if(c1 > c2){
        break;
      }  
  }
  printf("\nAnos: %d\n", anos);
  return 0;
}


