#include<stdio.h>
int main()
{
	int r,c;
	printf("\tEnter row of matrix: ");
	scanf("%d",&r);
	printf("\tEnter column of matrix: ");
	scanf("%d",&c);
	int arr[r][c];
	printf("\n\tEnter the elements of array:\n\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("\tarr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int max;
	max=arr[0][0];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arr[i][j]>=max)
			max=arr[i][j];
		}
	}
	printf("\n\tThe maximum number is : %d",max);
}
/*
Output:
        Enter row of matrix: 3
        Enter column of matrix: 5

        Enter the elements of array:

        arr[0][0]: 1
        arr[0][1]: 2
        arr[0][2]: 3
        arr[0][3]: 342
        arr[0][4]: 2
        arr[1][0]: 45
        arr[1][1]: 23
        arr[1][2]: 34
        arr[1][3]: 34
        arr[1][4]: 3445
        arr[2][0]: 23
        arr[2][1]: 333
        arr[2][2]: 335
        arr[2][3]: 56
        arr[2][4]: 35

        The maximum number is : 3445
*/