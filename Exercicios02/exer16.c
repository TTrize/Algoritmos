#include <stdio.h>

int main(){

  float n1, n2, n3, media;

  printf("Digite as notas dos alunos\n");
  printf("nota1: \n");
  scanf("%f", &n1);
  printf("nota2: \n");
  scanf("%f", &n2);
  printf("nota3: \n");
  scanf("%f", &n3);

  media = ((n1 + n2 + n3) / 2);

  if(media >= 8){
    printf("Media: %.0f\nConceito: A\n", media);
  }
  else if(media >= 5 && media < 8){
    printf("Media: %.0f\nConceito: B\n", media);
  }
  else{
    printf("Media: %.0f\nConceito: C\n", media);
  }

  return 0;
}
