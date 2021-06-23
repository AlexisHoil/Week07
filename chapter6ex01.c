#include <stdio.h>
#include <math.h>

char line[100];
int abs1;
int abs2;
int ord1;
int ord2;
int square;
int aSq;
int bSq;
int realD;


int main(void) {
  printf("Enter the first point in the form x y: ");
   fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &abs1, &ord1);
  printf("Enter the second point in the form x y: ");
   fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &abs2, &ord2);

  aSq= (abs2-abs1)*(abs2-abs1);
  bSq= (ord2-ord1)*(ord2-ord1);
  square= aSq + bSq;
  realD= sqrt(square);

  printf("The square of the distance between two points is %d \n", square);

  printf("The real distance between two points is %d \n", realD);



  return 0;