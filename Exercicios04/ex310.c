#include <stdio.h>

int main(){

  int l1,l2,c1,c2,mul,cont;
  int A[l1][c1];
  int B[l2][c2];
  
  printf("Linhas A e B\n");
  scanf("%d %d", &l1, &l2);
  printf("Colunas A e B\n");
  scanf("%d %d", &c1, &c2);
  if(c1 == l2){
    for(int i=0; i<l1; i++){
      for(int j=0; j<c1; j++){
        printf("A[%d][%d]\n",i,j);
        scanf("%d", &A[i][j]);
      } 
    }
    for(int i; i<l2; i++){
      for(int j=0; j<c2; j++){
        printf("B[%d][%d]\n", i,j);
        scanf("%d", &B[i][j]);
      }
    }
    for(int i=0; i<l1; i++){
      for(int j=0; j<c2; j++){
        mul = A[i][j] * B[i][j];
        cont += mul;
      }
      printf("%d\n", cont);
    }
  }
  else
    printf("Os valores não podem multiplicar\n");
}
