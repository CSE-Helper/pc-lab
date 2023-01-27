#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    printf("GCD\n");
    printf("Enter the first and second number:");
    scanf("%d %d",&a,&b);
    c=recgcd(a,b);
    printf("GCD of number using recursion:%d\n",c);
    d=nonrecgcd(a,b);
    printf("GCD of number using non recursion:%d\n",d);
    printf("\n");

    printf("FACTORIAL\n");
    printf("Enter the number:\n");
    scanf("%d",&n);
    a=recfactorial(n);
    printf("Factorial of the number using recursion:%d\n",a);
    b=nonrecfactorial(n);
    printf("Factorial of the number using non recursion:%d\n",b);
    getch();
}
int recgcd(int x,int y)
{
    if(y==0)
        return (x);
    else
        return(recgcd(y,x%y));
}
int nonrecgcd(int x,int y)
{
   int z;
   while(x % y != 0)
   {
    z = x % y;
    x = y;
    y = z;
   }
   return(y);
}
int recfactorial(int x)
{
   int f;
   if(x == 0)
    return(1);
   else
    f = x * recfactorial(x - 1);
    return(f);
}
int nonrecfactorial(int x)
{
   int i, f = 1;
   for(i = 1;i <= x; i++)
   {
      f = f * i;
   }
   return(f);
}
