#include<stdio.h>
int main()
{
    char string[40],a[100],b[100];
    int length=0, flag=1,i;
    printf("\n##Checking Palindrome Without using Build-in function##\n");
    printf("Enter a string to check if it's a palindrome:\n");gets(string);
    for(i=0;string[i]!='\0';i++){
        length++;}
    for(i=0;i< length/2;i++){
        if( string[i] != string[length-1-i] ){
            flag=0;
            break;}
    }if(flag==1){
    printf("The string is a palindrome.");}
    else{
    printf("The string isn't a palindrome.");}
    printf("\n\n##Checking Palindrome using Build-in function##");
    printf("\nEnter a string to check if it's a palindrome:\n");gets(a);
    strcpy(b,a);
    strrev(b);
    if (strcmp(a, b) == 0)
       printf("The string is a palindrome.\n");
    else
       printf("The string isn't a palindrome.\n");
    return 0;
}
