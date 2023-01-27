#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d", &a, &b);
    if(a==b)
        printf("\na is equal to b");
    else
        printf("\na is not equal to b");
     if(a!=b)
         printf("\na is not equal to b");
     else
        printf("\na is equal to b");
     if (a<=b)
         printf("\na is less than or equal to b");
     else
         printf("\na is greater than b");
     if (b>=a)
         printf("\nb is greater than or equal to a");
     else
         printf("\nb is less than a");
         return 0;
}




