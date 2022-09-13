#include <stdio.h>

int main(){

  int a[10], b[10];

  for(int i=0; i<10; i++){
    printf("Aluno[%d]\t\n digit[1] para D1\t\n [2] para D2\t\n [3] para ambos\t\n [0] para nenhum\n", i);
    scanf("%d", &a[i]);
    if(a[i] == 0)
      b[i] = 0;
    else if(a[i] == 1)
            b[i] = 1;
         else if(a[i] == 2)
                b[i] == 3;
              else if(a[i] == 3)
                      b[i] = 3;

  } 
  for(int i=0; i<10; i++){
    if(b[i] == 0)
      printf("Aluno[%d] neunhum curso\n",i);
    else if(b[i] == 1)
      printf("Aluno[%d] curso: D1\n",i);
    else if(b[i] == 2)
      printf("Aluno[%d] curso: D2\n",i);
    else if(b[i] == 3)
      printf("Aluno[%d] Ambos cursos\n",i);
  }
}   
