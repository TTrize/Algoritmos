#include <stdio.h>

int main(){
  int n1,n2,n3,apro=0,rep=0;
  int a[100],b[100],c[100];

  for(int i=0; i<3; i++){
    scanf("%d %d %d",&n1, &n2, &n3);
    a[i] = n1*n2*n3/3;
    if(a[i]<5){
      rep++;
      b[i] = a[i];
    }
    else{
      if(a[i]>5){
      apro++;
      c[i] = a[i];
      }
    }
  }
  printf("Notas Altas: %d e Baixas: %d\n", apro, rep);
  for(int i=0; i<3; i++){
    printf("Aprovados: %d\n", c[i]);
  }
  for(int i=0; i<3; i++){
    printf("Reprovados: %d\n", b[i]);
  }
}
