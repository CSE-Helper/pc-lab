#include<stdio.h>
int main()
{
    char a,name[100];
    printf("Using gets() & puts()\n");
    printf("\nEnter a string:");
    gets(name);
    printf("\nEntered string:");
    puts(name);
    printf("=========================");

    printf("\nUsing getchar() & putchar()\n");
    printf("\nEnter a character:");
    a=getchar();
    printf("\nEntered character:");
    putchar(a);
    printf("\n=========================\n");
    return 0;
}
