#include <stdio.h>

int main(){

  int A[20];
  int S = 0;

    for(int i=0; i<20; i++){
      scanf("%d", &A[i]);    
    }
    for(int i=0; i<20; i++){
      if(A[i] < A[19-i]){
        S += (A[i] - A[19-i])*2;
        }
      else{
        break;
      }
    }
    printf("\n%d\n", S);
}
