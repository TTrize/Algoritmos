#include <stdio.h>

#define COL 3
#define LIN 6

int main(){

  float N[COL][LIN];
  float sum=0, a=0, b=0, c=0;
  int i, j;


  for(i=0; i < COL; i++){
    
    for(j=0; j < LIN; j++){
      printf("Entre com os valores da linha da matriz: ");
      printf("Matriz: [%d][%d]: ", i, j);
      scanf("%f", &N[i][j]);
      sum += N[i][j];
    }
  }
  for(i=0; i < COL; i++){
    
     for(j=0; j < LIN; j++){
       printf("Matriz N: [%d][%d]: %.2f\n",i , j, N[i][j]);
       
     }
  }

  for(i=0; i < COL; i++){
      
     for(j=0; j < LIN; j++){
       if(i==0){
        a += N[i][j];
       }
       if(i==1){
        b += N[i][j];
       }
       if(i==2){
        c += N[i][j];
       }
     }
  }

      printf("\nO valor da soma da primeira coluna: N[0][%.2f]\n", a);
      printf("\nO valor da soma da segunda coluna: N[1][%.2f]\n", b);
      printf("\nO valor da soma da terceira coluna: N[2][%.2f]\n", c);
      printf("\nA soma dos elementos total da matriz: %.2f\n", sum);
return 0;
}
