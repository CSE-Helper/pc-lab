#include<stdio.h>
int main()
{
	int a = 5, b = 5, c = 10;
	printf("Logical AND \n(a==b)&&(c>b) is %d \n", (a==b)&&(c>b));
	printf("Logical OR \n(a==b)||(c<b) is %d \n", (a==b)||(c<b));
	return 0;
}
