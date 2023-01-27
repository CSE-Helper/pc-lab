#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,e;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%f",&d);
    printf("Enter the value of e:");
    scanf("%f",&e);

    printf("\nAbsolute value of a:%d",abs(a));
    printf("\nAbsolute value of b:%d",abs(b));

    printf("\n\nSquare root of c:%f",sqrt(c));
    printf("\nSquare root of d:%f",sqrt(d));

    printf("\n\nFloor value of e:%f",floor(e));
    printf("\nFloor value of a:%f",floor(a));

    printf("\n\nCeil value of d:%f",ceil(d));
    printf("\nCeil value of e:%f",ceil(e));

    printf("\n\nPower value:%f",pow(a,b));
    printf("\nPower value:%f\n",pow(b,a));
    return 0;
}
