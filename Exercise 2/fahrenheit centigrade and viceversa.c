#include<stdio.h>
void main()
{
    float c,f,c1,f1;
    printf("Enter the Celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The Fahrenheit is:%f",f);
    printf("\n\nFahrenheit:");
    scanf("%f",&f1);
    c1=(f1-32)*5/9;
    printf("The Celcius is:%f",c1);
}
