#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100],temp;
    int i,j;
    printf("Enter the string:");
    scanf("%s",&str);
    printf("Ascending order of the string:\n",str);
    for(i=0;str[i];i++)
    {
        for(j=i;str[j];j++)
        {
            if(str[j]<str[i])
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
    }
    printf("%s\n",str);
    return 0;
}
