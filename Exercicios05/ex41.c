#include <stdio.h>

int func(int a, int b, int c){
int sum=0, i=0;
  if(a > 1){
    if(b > c){
      for(i=c; i <= b; i++){
        if(i%a == 0)
            sum += i;
      }
     }
    else if(c > b){
            for(i=b; i <= c; i++){
                if(i%a == 0){
                   sum += i;
                }
             }
         }
       }
  return sum;
}

int main(){
  int r;
  r = func(2, 3, 10);
  printf("%d\n", r);

return 0;
}
