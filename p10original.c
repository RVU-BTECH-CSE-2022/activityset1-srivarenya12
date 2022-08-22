#include <stdio.h>
void area(int base, int height)
{
    int area=(0.5*base*height);
    printf("area is %d",area);
}
int main()
{
  int base,height;
  printf("enter base and height");
  scanf("%d,%d",&base,&height);
  area(base,height);
}
