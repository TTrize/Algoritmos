#include <stdio.h>

int xey(int x, int y){
  int pow=1, i;
  for(i=1; i <= y; i++){
    pow = pow * x;
  }
  return pow;
}

int main(){
  int a, b, res;
  scanf("%d %d", &a, &b);
  res = xey(a, b);
  printf("%d\n", res);
}
