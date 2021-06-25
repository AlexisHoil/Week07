/* Write a program to convert English units to metric (i.e., miles to
kilometers, gallons to liters, etc.). Include a specification and a code design. It converts gallons to liters, milles to kilometers, feets to meeters */ 

#include <stdio.h>
#include <string.h>
char line[100];

float value;
char enU[100];
float meU;
int first;
int first1;
int second;
int second1;
int third;
int third2;
int fourth;
int fourth1;


int main(void){ 

  printf("Enter the amount of englis units: "); /* First the program give us the amount of the units to convert*/
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &value);

  printf("Enter what english unit is (i.e., feets, gallons, miles, etc): "); /* then, the program give us the unit that we are using */
  fgets(enU, sizeof(enU), stdin);
  
first= strcmp(enU, "feets" );
first1= strcmp(enU, "FEETS" );
second=strcmp(enU, "miles" );              /* Here, it compare the words writen with the units that the program has.  */
second1=strcmp(enU, "MILES" );
third=strcmp(enU, "gallons" );
third2= strcmp(enU, "GALLONS" );
fourth= strcmp(enU,"pounds" );
fourth1= strcmp(enU,"POUNDS" );

  if ((first==10) || (first1==10)) {                                   /* it evaluate the comparations to select which operation use, and it prints the result*/
  meU= value / 3.28;
  printf("The %.2f feets are %.2f meters/\n ", value, meU );
  }
  else if ((second==10) || (second1==10)){
    meU= value / 0.62;
    printf("The %.2f miles are %.2f kilometers/\n ", value, meU );
  }
  else if ((third==10) || (third2==10)){
    meU= value * 3.785;
    printf("The %.2f gallons are %.2f liters/\n ", value, meU );
  }
  else if ((fourth==10) || (fourth1==10)){
    meU= value / 2.20;
    printf("The %.2f pounds are %.2f kilograms/\n ", value, meU );
  }
 


 


 return 0;
}