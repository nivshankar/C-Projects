#include<stdio.h>
void Array()
{
	int n;
	printf("\n\tEnter array's size : ");
	scanf("%d",&n);
	int arr[n][n];
	printf("\n\tEnter array elements : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\tarr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int *ptr[n][n];
	printf("\n\tCube of all elements : \n\t");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ptr[i][j]=&arr[i][j];
			*ptr[i][j]=arr[i][j]*arr[i][j];
			printf("%d ",*ptr[i][j]);
		}
		printf("\n\t");
	}
	
}
int main()
{
	Array();
}
/*
Output:

        Enter array's size : 3

        Enter array elements :
        arr[0][0] = 1
        arr[0][1] = 2
        arr[0][2] = 3
        arr[1][0] = 4
        arr[1][1] = 5
        arr[1][2] = 6
        arr[2][0] = 7
        arr[2][1] = 8
        arr[2][2] = 9

        Cube of all elements :
        1 4 9
        16 25 36
        49 64 81

*/