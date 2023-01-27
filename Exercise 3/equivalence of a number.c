#include <stdio.h>
int main()
{
    int S, D;
    printf("Enter the values for S and D:");
    scanf("%d %d", &S, &D);
    if (S == D)
        printf("S and D are equal\n");
    else
        printf("S and D are not equal\n");
}
