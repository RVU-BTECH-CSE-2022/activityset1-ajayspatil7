#include <stdio.h>

int input(){
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  return a;
}

int findLargest(int a, int b, int c){
  int d;
  if(a >= b && a >= c){
    d = a;
    }
  if(b >= a && b >= c){
    d = b;
  }
  if(c >= a && c >= b){
    d = c;
  }
  return d;
  
}

int output(int a, int b, int c, int d){
  printf("Largest of %d , %d , %d is %d \n", a, b, c, d);
}

int main(){
  
  int a, b, c, d;
  a = input();
  b = input();
  c = input();
  d = findLargest(a, b, c);
  output(a, b, c, d);
}