#include<stdio.h>
struct bank_details
{
    int account_number;
    char name[10],address[10];
    int balance;
}
a[5];
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Details of the Customer: %d\n",i+1);
        printf("\nEnter the name:");
        scanf("%s",&a[i].name);
        printf("Enter the account number:");
        scanf("%d",&a[i].account_number);
        printf("Enter the balance:");
        scanf("%d",&a[i].balance);
        printf("Enter the address:");
        scanf("%s",&a[i].address);
        printf("\n==============================\n");
        printf("\n");
    }
    return 0;
}
