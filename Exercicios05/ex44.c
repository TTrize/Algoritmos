#include <stdio.h>

int day, mouth, year, maxd, maxm=12, leapyear;

int nextday(day){
  if(day < maxd){
    day += 1;
  }
  else if(day == maxd){
          day=1;
          mouth = nextmouth(mouth);
  }
  return day;
}
int nextyear(year){
  year += 1;
  return year;
}
int nextmouth(mouth){
  mouth += 1;
  if(mouth >= maxm){
    mouth = 1;
    year = nextyear(year);
  }
return mouth;
}
int leapy(year){
  if(year%4 == 0){
    leapyear = 1;
  }
  else{
    leapyear = 0;
  }
  return leapyear;
}
int correctm(mouth){
  if(mouth==1||mouth==3||mouth==5||mouth==7||mouth==8||mouth==10||mouth==11){
    maxd=31;
  }
  else if(mouth==2){
         if(leapyear=0){
            maxd=28;
         }
         else{
            maxd=29;
         }
        }
  else{
    maxd=30;
  }
 return maxd;
}

int main(){
  scanf("%d %d %d", &day, &mouth, &year);
  leapyear = leapy(year);
  maxd = correctm(mouth);
  day = nextday(day);
  printf("Next (day: %d, mouth: %d & year:%d)\n", day,mouth,year);
}
