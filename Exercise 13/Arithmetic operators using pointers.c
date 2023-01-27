#include<stdio.h>
int main()
{
    int num,a,b;
    printf("INCREMENT\n");
    printf("Enter the value:");
    scanf("%d",&num);
    int*p;
    p=&num;
    printf("\nThe address of p variable is %u\n",p);
    p++;
    printf("After Increment\n");
    printf("The address of p variable is %u\n",p);

    printf("\nDECREMENT\n");
    printf("Enter the value:");
    scanf("%d",&num);
    int *q;
    p=&num;
    printf("The address of p variable is %u\n",p);
    p--;
    printf("After Decrement\n");
    printf("The address of p variable is %u\n",p);

    printf("\nADDITION\n");
    printf("Enter the value:");
    scanf("%d",&num);
    int *r;
    p=&num;
    printf("The address of p variable is %u\n",p);
    p=p+5;
    printf("After Adding\n");
    printf("The address of p variable is %u\n",p);

    printf("\nSUBTRACTION\n");
    printf("Enter the value:");
    scanf("%d",&num);
    int *s;
    p=&num;
    printf("The address of p variable is %u\n",p);
    p=p-5;
    printf("After Subtraction\n");
    printf("The address of p variable is %u\n",p);

    printf("\nCOMPARISON\n");
    printf("Enter the value:");
    scanf("%d",&num);
    int*ptr1=&num;
    int*ptr2=&num;
    if(ptr1=ptr2)
    {
        printf("They are Equal");
    }
    else
    {
        printf("They are not equal");
    }
    return 0;
}
