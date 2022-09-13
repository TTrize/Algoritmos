#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void errorfatal(char *message){
  char error[100];
  strcpy(error, "Fatal error for condition");
  strncat(error, message, 83);
  perror(error);
  exit(-1);
}

int calc(int a, int b){
  int sum, sub, mul, div;
  int result;
    if(a >= b){
      sum = a+b;
      sub = a-b;
      mul = a*b;
      div = a/b;
      result = printf("%d %d %d %d\n",sum, sub, mul, div);
    }
    else{
      errorfatal("The value is not accepted for completed operation, A >= B\n");
    }
  return result;
}

int main(){
  int x, y, res=0;
    scanf("%d %d", &x, &y);
    res = calc(x, y;
    printf("%d", res);
      
  return 0;
}
