#include<stdio.h>
int main()
{
 int i, j, rows, columns, a[10][10], b[10][10];

 printf("\nEnter Number of rows and columns:\n");
 scanf("%d %d", &i, &j);

 printf("\nEnter the elements of the matrix: \n");
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j; columns++)
    {
      scanf("%d", &a[rows][columns]);
    }
  }
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j; columns++)
    {
      b[columns][rows] = a[rows][columns];
    }
  }

 printf("\nTranspose of the matrix is: \n");
 for(rows = 0; rows < j; rows++)
  {
   for(columns = 0; columns < i; columns++)
    {
      printf("%d \t ", b[rows][columns]);
    }
    printf("\n");
  }
return 0;
}
