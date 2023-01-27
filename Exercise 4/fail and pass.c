#include <stdio.h>
int main()
{
    int eng,chem,phy,math,comp,french;
    int marks;
    printf("Enter six subject mark:");
    scanf("%d%d%d%d%d%d",&eng,&chem,&phy,&math,&comp,&french);
    if(eng>=35&&chem>=35&&phy>=35&&math>=35&&comp>=35&&french>=35)
    {
    printf("\n congrats! you have passed");
    }
    else
    {
    printf("\n sorry! you have failed");
    }
    return 0;
}
