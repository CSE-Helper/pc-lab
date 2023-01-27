#include<stdio.h>
void sum();
void main()
{
  int a,b,result;
  printf("\n To calculate the sum of two numbers:");
  printf("\nEnter two numbers:");
  scanf("%d %d",&a,&b);
  sum(a,b);
}
void sum(int a,int b)
{
 printf("\nThe sum is %d",a+b);
}
