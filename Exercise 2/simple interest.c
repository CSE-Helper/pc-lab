#include<stdio.h>
int main()
{
	float P,N,R, SI;
	printf("Enter principle,rate of interest and time:");
	scanf("%f%f%f", &P, &N, &R);
	printf("Simple interest is %f", P*N*R/100);
	return 0;

}
