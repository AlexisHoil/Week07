/* A professor generates letter grades using Table 6 -3. Given a numeric grade, print the letter.  */

#include <stdio.h>

char line[100];
int grades;

int main(void) {

  printf("Enter a numeric grade ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grades);

  if (grades>=0 && grades<=60)
     printf("The grade is F\n");
     
 if (grades>=61 && grades<=70)
      printf("The grade is D\n");
      
 if (grades>=71 && grades<=80)
      printf("The grade is C\n");
      
 if (grades>=81 && grades<=90)
      printf("The grade is B\n");

 if (grades>=91 && grades<=100)
      printf("The grade is A\n");



  return 0;
}