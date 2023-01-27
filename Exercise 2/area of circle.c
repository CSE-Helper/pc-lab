#include<stdio.h>
int main()
{
	float a;
	printf("Enter the radius :");
	scanf("%f", &a);
	printf("\nThe area of circle is %f", 3.14 * a * a);
	printf("\nThe value in float is %f", 3.14 * a * a);
	printf("\nThe value in exponent is %e", 3.14 * a * a);
}
