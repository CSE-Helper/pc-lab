#include <stdio.h>
void main()
{
	int i , j;
	for (i = 1; i<= 10; i++)
	{
		if (i == 3 ||  i == 5)
		{
			continue;
		}
		else
		{
			for (j = 1; j <= 10; j++)
			{
				printf("\n%d * %d = %d", i, j, i * j);
			}
			printf("\n");
		}
	}
}
