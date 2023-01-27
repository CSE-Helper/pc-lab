#include<stdio.h>
int main()
{
	int a;
	float b,c;
	printf("Enter the units used : ");
	scanf("%d",&a);
	if(a>=1&&a<=100)
	{
		c=a*1.5;
	}
	else if(a>=1-1&&a<=300)
	{
		b=a-100;
		c=2.0*b+1.5*100;
	}
	else if(a>=301&&a<=500)
	{
		b=1-300;
		c=2.5*b+200*2+1.5*100;
	}
	else
	{
		b=a-500;
		c=3.25*b+200*2.5+200*2.5+1.5*100;
	}
	printf("\nNumber of units : %d",a);
	printf("\nTotal amount    : %f",c);
	return 0;
}
