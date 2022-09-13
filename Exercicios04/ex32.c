#include <stdio.h>
#include <unistd.h>

#define N1 20
#define N2 30
#define N3 50
int main(){

  int A[N1];
  int B[N2];
  int C[N3];

  for(int i=0;i < N1; i++){
    scanf("%d", &A[i]);
  }
  for(int j=0; j < N2; j++){ 
      scanf("%d", &B[j]);
  }
  for(int k=0; k < N1; k++){
      C[k] = A[k];
  }
  for(int l=0; l < N2; l++){
      C[l+N1] = B[l];
 
  }
  for(int m=0; m < N3; m++){
    printf("C[%d] = %d",m , C[m]);
  }
  return 0;
}
