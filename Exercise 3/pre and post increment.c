#include <stdio.h>
int a;
int main()
{
printf("Enter the value of a: ");
scanf("%d",&a);
printf("The Pre increment of a is (++a) :%d",++a);
printf("\nThe Post increment of a is (a++) :%d",a++);
return 0;
}
