/*A leap year is any year divisible by 4, unless the year is divisible by
100, but not 400. Write a program to tell if a year is a leap year. */

#include <stdio.h>

char line[100];

int year;
int leap;
int first;
int second;
int third;

int main(void){ 

  printf("Enter a year: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &year);

  
first= year % 4;
  
   if (first==0){
    second= year%100;
    
     if (second==0){
      third= year%400;

      if (third==0){
      printf("The year %d is a leapyear\n ", year );
      }

      else 
      printf("The year %d is not leapyear\n ", year );
     }

     else
      printf("The year %d is a leapyear\n ", year );

   }    
   else 
    printf("The year %d is not leapyear\n ", year );
    


 
 


 return 0;
}