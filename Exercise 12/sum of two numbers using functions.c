#include<stdio.h>
int addnumbers(int a, int b);
int main()
{
  int n1,n2,sum;
  printf("Enter two numbers:");
  scanf("%d %d",&n1,&n2);
  sum = addnumbers(n1,n2);
  printf("Sum = %d",sum);
  return 0;
}
int addnumbers(int a, int b)
{
 int result;
 result=a+b;
 return result;
}
