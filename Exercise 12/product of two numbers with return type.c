#include<stdio.h>
int product(int, int);
void main()
{
  int a,b,result;
  printf("\nTo calculate the product of two numbers:");
  printf("\nEnter two numbers:");
  scanf("%d %d",&a,&b);
  result= product(a,b);
  printf("\nThe product is :%d",result);
}
int product(int a, int b)
{
 return a*b;
}
