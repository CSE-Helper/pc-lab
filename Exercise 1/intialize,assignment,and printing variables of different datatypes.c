#include <stdio.h>
int main()
{
   int a;
   float b;
   char c;
   double d;
   printf("Enter a the values for \n");
   printf("int\t= ");scanf("%d",&a);
   printf("float\t= ");scanf("%f",&b);
   printf("char\t= ");scanf("%s",&c);
   printf("double\t= ");scanf("1f",&d);
   printf("\nint\t: %d",a);
   printf("\nfloat\t: %f",b);
   printf("\nchar\t: %c",c);
   printf("\ndouble\t: %.3lf",d);
return 0;
}
