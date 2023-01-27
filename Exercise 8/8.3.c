#include<stdio.h>
int main()
{
   int a[100], n, i, positive=0, negative=0, zero=0;
   printf("Enter array size: ");
   scanf("%d", &n);
   printf("Enter %d elements: ",n);

   for(i=0; i<n; i++)
   {
     scanf("%d", &a[i]);
     if(a[i]>0) positive++;
     else if(a[i]==0) zero++;
     else negative++;
   }
   printf("Total Number of Positive numbers in array:%d", positive);
   printf("\nTotal Number of Negative numbers in array:%d", negative);
   printf("\nZeros count is %d", zero);
   return 0;
}
