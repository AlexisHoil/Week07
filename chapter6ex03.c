/* Modify the pre vious program to print a + or - after the letter grade,
based on the last digit of the score. The modifiers are listed in Table 6-4.*/

#include <stdio.h>

char line[100];
int grades;
int mod;

int main(void) {

  printf("Enter a numeric grade ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grades);
mod= grades % 10;


if( grades>=61 && grades<=100){
 
     
 if (grades>=61 && grades<=70)
      printf("The grade is D");
      
 if (grades>=71 && grades<=80)
      printf("The grade is C");
      
 if (grades>=81 && grades<=90)
      printf("The grade is B");

 if (grades>=91 && grades<=100)
      printf("The grade is A");
      
     if (mod>=1 && mod<=3)
      printf("-");

     if (mod>=4 && mod<=7)
      printf(" ");

     if (mod>=8 && mod<=9 )
      printf("+");
}

 else
     printf("The grade is F");



  return 0;
}