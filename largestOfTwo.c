#include <stdio.h>

int input(){
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  return a;
}

int findLargest(int a, int b){
  int c;
  if(a < b){
    c = b;
  }else{
    c = a;
  }
  return c;
  
}

int output(int a, int b, int c){
  printf("Largest of %d and %d is %d \n", a, b, c);
}

int main(){
  
  int a, b, c;
  a = input();
  b = input();
  c = findLargest(a, b);
  output(a, b, c);
}