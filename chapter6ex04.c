/*  Given an amount of money (less than $1.00), compute the number
of quarters, dimes, nickels, and pennies needed. */
#include <stdio.h>

char line[100];
float mone;
float rest;
float rest2;
float rest3;
float dim1;
float pen;
int check;
int mod;
int quar;
int dim;
int nickels;


int main(void) {

  printf("Enter an amount of money(less than $1.00) ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &mone);
  check= mone*100;
  mod= check % 10; 

if ( mod == 5 && check !=55 && check != 5 && check != 15){
  quar = mone / 0.25;
  rest = mone - (quar * 0.25);
  dim1 = rest  / 0.10;
  nickels = 0;
  rest2= 
  pen = 0;
printf("the $ %.2f contains %d cuarters, %1.0f dimes, %d nickels, %1.0f pennies\n ", mone, quar, dim1, nickels, pen);

}
 else{
  quar = mone / 0.25;
  rest = mone - (quar * 0.25);
  dim = rest  / 0.10;
  rest2 = rest  - (dim * 0.10);
  nickels = rest2 / 0.05;
  rest3 = rest2 - (nickels * 0.05);
  pen = rest3 / 0.01;

printf("the $ %.2f contains %d cuarters, %d dimes, %d nickels, %1.0f pennies\n ", mone, quar, dim, nickels, pen);

 
 }


 return 0;
}