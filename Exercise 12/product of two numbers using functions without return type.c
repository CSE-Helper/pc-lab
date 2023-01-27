#include<stdio.h>
void pdt();
void main()
{
  printf("\n To calculate the product of two numbers:");
  pdt();
}
void pdt()
{
 int a,b;
 printf("\nEnter two numbers:");
 scanf("%d %d",&a,&b);
 printf("The product is %d",a*b);
}
