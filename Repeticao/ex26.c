#include <stdio.h>

int main(){

  int i = 0;
  float n = 0, s = 0, r = 0;

  while(i < 10){
      i++;
      scanf("%f", &n);
      s = r + n/i;
      i++;
      scanf("%f", &n);
      r = s - n/i;
  }
  printf("%.2f", r);
return 0;
}
