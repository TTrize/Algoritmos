#include <stdio.h>

int main(){

  char c[10];
  
  for(int i=0; i<10; i++){
    printf("insira um caractere: \n");
    scanf(" %c", &c[i]);
    if(c[i] == 'a' || c[i] == 'e' || c[i] =='i' || c[i] == 'o' || c[i] == 'u'){
        c[i] = '@';
    }
  }
  for(int i=0; i<10; i++){
    printf("C[%d]: %c\n", i ,c[i]);
  }
}

