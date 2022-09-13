#include <stdio.h>

int main(){
  int a[10];
  int s[10];
  int resp=0;

  for(int i=0; i < 10; i++){
    scanf("%d", &a[i]);
    if(a[i]%2 != 0){
      s[i] = a[i];
    }
    else{
      s[i] += 0;
    }
  }
  for(int i=0; i < 10; i++){
     resp += s[i];
  } 
  printf("Sum = %d\n", resp);
}
