#include<stdio.h>
#define pi 3.14
int main()
{
	int a,b,c,d,e;
	printf("SPHERE\nEnter the radius of sphere : ");
	scanf("%d",&a);
	int a1;
	a1=4*pi*a*a*a/3;
	printf("Volume of sphere is %d cubic cm",a1);
	printf("\nCONE\nEnter the radius and height of cone : ");
	scanf("%d %d",&b,&c);
	int a2;
	a2=pi*b*b*c/3;
	printf("The volume of cone is %d cubic cm",a2);
	printf("\nCYLINDER\nEnter the radius and height of cylinder : ");
	scanf("%d %d",&d,&e);
	int a3;
	a3=pi*d*d*e;
	printf("The volume of cyliner is %d cubic cm",a3);
	return 0;
}
