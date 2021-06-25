/* Write a program to perform date arithmetic such as how many days
there are between 6/6/90 and 4/3/92. Include a specification and a code design. */

#include <stdio.h>
#include <stdlib.h>

char line[100];

int year;
int year1;
int year2;
int year3;
int yearN;
int yearL;
int yearO;
int yearP;
int leap;
int first;
int second;
int third;
int month;
int month2;
int monthL;
int monthO;
int monthP;
int espMonth;
int monD;
int day;
int day2;
int amDay;
int amMon;
int amYear;
int total;
int monAnt;
int dif;

int main(void){ 

   printf("Enter first date in the format DD MM YYYY: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d", &day, &month, &year);

  printf("Enter second date greater than first data in the format DD MM YYYY: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d", &day2, &month2, &year2);

  if (year2<year){
   yearO= year2 ;
   yearP=year;
  }
  else{
  yearO= year;
  yearP= year2;
  }
  if (month2<month){
   monthO= month2 ;
   monthP=month;
  }
  else{
  monthO= month;
  monthP= month2;
  }

  first= yearO % 4;
  
   if (first==0){
    second= yearO%100;
    
     if (second==0){
      third= yearO%400;

      if (third==0){
      yearN=366 ;
      }

      else 
      yearN=365;
     }

     else
    yearN=366;

   }    
   else {
     yearN=365;
   }
if (yearN==366){
  espMonth=29;
}
else{ 
espMonth=28;
}

yearL= yearO;    
while(yearL<yearP) { 
first= year % 4;
  
   if (first==0){
    second= year%100;
    
     if (second==0){
      third= year%400;

      if (third==0){
      year1=366 ;
      }

      else 
      year1=365;
     }

     else
    year1=366;

   }    
   else {
     year1=365;
}

yearL ++;
year3= year1 +amYear;
amYear=year3;
}


  monthL=monthO;


while (monthL<monthP){

if (month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12){
monD=31;
}
else if (month==4 ||month==6 ||month==9 ||month==11){
monD=30;
}
else if (month==2){
monD=espMonth;
}

monthL ++;
monAnt=monD + amMon;
amMon=monAnt;
}
 amDay = day -day2;
 dif= year +1;

 if (dif == year2){
total= amYear - (abs(amDay) + amMon);
 }
else {
total= abs(amDay) + amMon + amYear;
}

printf("The total days between the dates %d/%d/%d and %d/%d/%d is %d  days\n", day, month, year, day2, month2, year2, total );

 return 0;
}