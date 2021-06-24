/* Write a program that, given the number of hours an employee
worked and the hourly wage, computes the employee's weekly pay. Count any
hours over 40 as overtime at time and a half.*/

#include <stdio.h>

char line[100];

int hours;
int wage;
int extra;
int hours2;
int pay;
int pay2;
int total;


int main(void){ 

  printf("Enter the number of hours and wage for example 22 520: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &hours, &wage);

  if (hours>40){
      printf("Enter the wage by the extraordinary hours: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &extra);

  hours2= hours-40;
  pay2= hours2 *extra;
  pay= 40*wage;
  total= pay + pay2;

printf("The employees weekly pay is %d\n ", total );



  }
else{
  if(hours<=40)
  pay= hours * wage;
   printf("The employees weekly pay is %d\n ", pay );
    
}

 
 


 return 0;
}