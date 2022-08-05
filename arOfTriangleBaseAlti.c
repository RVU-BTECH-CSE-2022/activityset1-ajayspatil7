#include<stdio.h>

int main(void){

  float base, altitude, area;
  printf("Enter base and altitude : \n");
  scanf("%f%f", &base, &altitude);
  area = 0.5*base*altitude;
  printf("The are of triangle with base=%f altitude=%f is= \n", base, altitude, area);
  return 0;
}

