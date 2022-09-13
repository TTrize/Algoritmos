#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define N 20
int main(){

  int A[N]; 
  int B[N];

  for(int i=0; i<N; i++){
    printf("A[%d]: ", i);
    scanf("%d", &A[i]);
  }
    for(int j=0; j<N; j++){
      if(A[j]%2 == 0){
        B[j] = pow(A[j], 3);
        printf("\nPAR: %d em B[%d]: = %d\n",A[j], j, B[j]);
      }
      else{
        B[j] = A[j]/2;
        printf("\nIMPAR: %d em B[%d] = %d\n",A[j], j, B[j]);
      }
    }
  return 0;
}
