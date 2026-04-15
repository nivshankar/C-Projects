#include<stdio.h>
int main()
{
	int i,j,k,a;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		printf("  ");
		for(j=i;j<=5;j++)
		{//first half of pyramid
			printf("%d ",j);
		}
		for(a=4;a>=i;a--)
		printf("%d ",a);
		printf("\n");
	}
}
/*
Output:
        5
      4 5 4
    3 4 5 4 3
  2 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/