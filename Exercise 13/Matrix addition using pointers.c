#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("Enter the value of m:");
    scanf("%d",&m);
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("Enter the second matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }
    printf("Addition Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }
}
