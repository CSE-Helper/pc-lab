#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20],str2[20],str3[20];
     printf("Enter the string 1:");scanf("%s",&str1);
     printf("Enter the string 2:");scanf("%s",&str2);

     printf("\nString in UPPERCASE: %s", strupr(str1));
     printf("\nString in lowercase: %s\n", strlwr(str1));

     printf("\nLength of string 1: %d\n", strlen(str1));
     printf("Length of string 2: %d\n\n", strlen(str2));

     if (strcmp(str1,str2) ==0){
        printf("String 1 and string 2 are equal\n");
     }else
     {
         printf("String 1 and 2 are different\n");
     }
      printf("\nConcatenation of two strings : %s",strcat(str1, str2));
      printf("\n\nReverse of string 1: %s\n", strrev(str1));
      printf("Reverse of string 2: %s\n", strrev(str2));
      printf("\nThe Copied string form string 1: %s",strcpy(str3, str1));
      printf("\nString copy of string 1 and string 2 is: %s\n\n",strcpy(str1,str2));
      return 0;
}
