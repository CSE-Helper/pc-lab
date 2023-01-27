#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for(k=1;k<=n;++k)
	{
		for(l=1;l<=k;++l)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}
