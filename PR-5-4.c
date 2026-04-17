#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("\nEnter the row size: ");
	scanf("%d",&r);
	printf("Enter the column size: ");
	scanf("%d",&c);
	printf("\nEnter array's elements:\n");
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);	
		}
	}
	int row ,column,SumR=0,SumC=0;
	printf("\nEnter row number: ");
	scanf("%d",&row);
	if(row<r&&row>=0)
	{
	printf("\nElements of row : ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(row==i)
				{
					printf("%d ,",arr[i][j]);
					SumR=SumR+arr[i][j];
				}
			}
		}
		printf("\nSum of row: %d\n",SumR);
	}	
	else
	printf("Invalid row ..\n");	
	
	printf("\nEnter column number: ");
	scanf("%d",&column);
	if(column<r&&column>=0)
	{
		printf("Elements of column : ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(column==j)
				{
					printf("%d ,",arr[i][j]);
					SumC=SumC+arr[i][j];
				}
			}
		}
		printf("\nSum of column: %d\n",SumC);
	}
	else
	printf("\nInvalid column ..");
}
/*
Output:
Case 1)
Enter the row size: 3
Enter the column size: 4

Enter array's elements:
arr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3
arr[0][3] = 4
arr[1][0] = 5
arr[1][1] = 6
arr[1][2] = 7
arr[1][3] = 8
arr[2][0] = 1
arr[2][1] = 3
arr[2][2] = 4
arr[2][3] = 6

Enter row number: 8
Invalid row ..

Enter column number: 1
Elements of column : 2 ,6 ,3 ,
Sum of column: 11

Case 2)
Enter the row size: 3
Enter the column size: 4

Enter array's elements:
arr[0][0] = 3
arr[0][1] = 5
arr[0][2] = 7
arr[0][3] = 3
arr[1][0] = 9
arr[1][1] = 8
arr[1][2] = 5
arr[1][3] = 1
arr[2][0] = 4
arr[2][1] = 8
arr[2][2] = 0
arr[2][3] = 1

Enter row number: 0

Elements of row : 3 ,5 ,7 ,3 ,
Sum of row: 18

Enter column number: 2
Elements of column : 7 ,5 ,0 ,
Sum of column: 12

*/