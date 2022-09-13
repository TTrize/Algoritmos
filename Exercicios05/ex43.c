#include <stdio.h>

int A(int a, int b, int c){

  int am;
  am = (a+b+c)/3;

  return am;
}
int P(int a, int b, int c){
  int pm;
  pm = ((a*5) + (b*3) + (c*2))/3;
  
  return pm;
}

int main(){
  int a, b, c,res;
  char type;
  scanf("%d %d %d", &a, &b, &c);
  scanf(" %c", &type);
  switch(type){
    case 'A':
          res = A(a,b,c);
          printf("%d\n", res);
          break;

    case 'P':
          res = P(a,b,c);
          printf("%d\n", res);
          break;
   
    default:
          printf("Condition error\n");
          break;
  }
  return 0;

}
