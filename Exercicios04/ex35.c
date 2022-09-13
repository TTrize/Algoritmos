#include <stdio.h>

int main(){
  int c[10][3];
  int p1=0, p2=0, p3=0;

  for(int i=0; i < 10; i++){
    for(int j=0; j < 3; j++){
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &c[i][j]);
    }
  }
  for(int i=0; i < 10; i++){
    if(c[i][0] <= c[i][1] && c[i][0] <= c[i][2]){
       p1++;
     }
     else if(c[i][1] <= c[i][0] && c[i][1] <= c[i][2]){ 
       p2++;
     }
     else if(c[i][2] <= c[i][0] && c[i][2] <= c[i][1]){ 
       p3++;
     }
  }
  
  printf("Alunos menores notas P1 %d\n", p1);
  printf("Alunos menores notas P2 %d\n", p2);
  printf("Alunos menores notas P3 %d\n", p3);
}
