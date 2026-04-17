#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the order of square matrix: ");
	scanf("%d",&n);
	int arr[n][n],arr1[n][n];
	printf("\nEnter element for index no:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
		arr1[j][i]=arr[i][j];
		}
	}
	
	printf("\n\nTranspose matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr1[i][j]);
			
		}
		printf("\n");
	}
}
/*
Output:
Enter the order of square matrix: 3

Enter element for index no:

arr[0][0] : 1
arr[0][1] : 2
arr[0][2] : 4
arr[1][0] : 5
arr[1][1] : 7
arr[1][2] : 64
arr[2][0] : 7
arr[2][1] : 46
arr[2][2] : 4


Transpose matrix:
1 5 7
2 7 46
4 64 4

*/