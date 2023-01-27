#include<stdio.h>
int main()
{
     int a,b;
     printf("enter two values :");
     scanf("%d%d",&a,&b);
     printf("\naddition of %d + %d is %d",a,b,a+b);
     printf("\nsubtraction of %d - %d is %d",a,b,a-b);
     printf("\nmultiplication of %d *%d is %d",a,b,a*b);
     printf("\ndivision of %d / %d is  %d",a,b,a/b);
     printf("\nmodulus of %d % %d is %d ",a,b,a%b);
     return 0;
}
