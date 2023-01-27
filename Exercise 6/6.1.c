#include<stdio.h>
void main()
{
	int n,sum,a;
	printf("Enter a number:");
	scanf("%d",&n);
	sum=0;
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("sum is:%d",sum);
}
