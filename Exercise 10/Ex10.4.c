#include<stdio.h>
#include<string.h>
int main()
{
    char c[10],d[10];
    int i,j;
    printf("CONCATENATION OF TWO STRINGS USING ARRAY\n\n");
    printf("Enter the string 1:");
    scanf("%s",&c);
    printf("Enter the string 2:");
    scanf("%s",&d);

    i=0;
    while(c[i]>0)
    {
        ++i;
    }
    for(j=0;d[j]>0;++j,++i)
    {
        c[i]=d[j];
    }
    printf("After concatenation:%s\n",c);
    return 0;
}
