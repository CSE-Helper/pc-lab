#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    int subject[5],total;
};
int main ( )
{
    static struct student s[100];
    int n,i,j;
    int atot=0;
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    printf("Enter the Marks of Five Subjects: ");
    for(i=1; i<=n; i++)
    {
        printf("\nEnter student[%d] student marks:",i);
        s[i].total=0;
        for(j=0; j<5; j++)
        {
            scanf("%d",&s[i].subject[j]);
            s[i].total=s[i].total+s[i].subject[j];
        }
        printf("\nTotal marks %d\n",s[i].total);
        atot+=s[i].total;
    }
    float average;
    average=(float)atot/10;
    printf("AVERAGE MARK OF 10 STUDENTS :%.2f",average);

}

