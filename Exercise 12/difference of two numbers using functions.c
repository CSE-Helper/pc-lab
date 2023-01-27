#include<stdio.h>
int difference();
void main()
{
  int result;
  printf("\nTo calculate the difference of two numbers");
  result= difference();
  printf("%d",result);
}

int difference()
{
 int a,b;
 printf("\nEnter two numbers:");
 scanf("%d %d",&a,&b);
 return a-b;
}
