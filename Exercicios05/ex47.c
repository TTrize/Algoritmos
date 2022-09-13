#include <stdio.h>

float payday(float price, float qtd){
  float total;
  total = price * qtd;
  if(total < 11.20){
    total = 11.20;
  }
return total;
}

int main(){
  float a, q, res;
  int code;
  printf("digit price KWh: ");
  scanf("%f", &a);
  printf("digit client code: ");
  scanf("%d", &code);
  printf("digite quanty: ");
  scanf("%f", &q);
  res = payday(a, q);
  printf("cliente code:[%d] pay total: %.2f\n", code, res);
}
