#include <stdio.h>

int main(){
 
  char c[8];
  int i, j, k;

for(i=0; i<8; i++){
  scanf(" %c", &c[i]);
}
for(k=0; k<8; k++){
  for(j=0; j<8;j++){
    if(c[k] == c[j]){
     printf("C[%d]: %c\n",j , c[j]);
    }
  }
}
  return 0;
}
