#include <stdio.h>
#include <string.h>

void completename(char *f, char *ln, char *cn){
  int i;
  for(i=0; i < strlen(f); i++){
    cn[i] = f[i];
  }
  cn[i] = ' ';
  for(i=0; i < strlen(ln); i++){
    cn[strlen(f) + 1 + i] = ln[i];
  }
  cn[strlen(f) + 1 + i] = '\0';
}

int main(){
  char name[100], lastname[100], cname[100];
  printf("First name:");
  scanf("%s", name);
  printf("Last name: ");
  scanf("%s", lastname);
  completename(name, lastname, cname);
  printf("complete name: %s \n", cname);
}
