#include <stdio.h>
int input(){
  int x;
  scanf("%d",&x);
  return x;
}
int add(int a , int b)
{
  int s=a+b;
  return s;
}
void output(int a,int b,int s){
  printf("%d+%d=%d",a,b,s);
}
int main(){
  int a,b,sum;
  printf("enter number1: ");
  a=input();
  printf("enter number2: ");
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}