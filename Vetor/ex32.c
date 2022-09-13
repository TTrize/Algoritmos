#include <stdio.h>

#define lda 5
#define ldb 3

int main(){

  float A[lda][ldb];
  float B[lda][ldb];
  float C[lda][ldb];
  int i, j;

  for(i=0; i < lda; i++){
     for(j=0; j < ldb; j++){

        printf("A[%d][%d]", i, j);
        scanf("%f", &A[i][j]);
     }
  }
 for(i=0; i < lda; i++){ 
    for(j=0; j < ldb; j++){

      printf("B[%d][%d]: ", i, j);
      scanf("%f", &B[i][j]);
    }
 }
 for(i=0; i < lda; i++){
    for(j=0; j < ldb; j++){

      C[i][j] = A[i][j] + B[i][j];
      printf("matriz C[%d][%d] = %.2f\n", i, j, C[i][j]);
    }
 }  
  
return 0;
}
