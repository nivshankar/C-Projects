#include<stdio.h>
int main()
{
	int n,i;
	printf("\tEnter the array's size:");
	scanf("%d",&n);
	int a[n];
	printf("\n\tEnter array's elements:\n");
	for(i=0;i<n;i++)
	{
		printf("\ta[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\tNegative elements of array are: ");
	for(i=0;i<n;i++)
	{	
		if(a[i]<0)
		printf("%d, ",a[i]);
		
	}
}
/*
Output:
        Enter the array's size:10

        Enter array's elements:
        a[0]: -10
        a[1]: -4
        a[2]: 34
        a[3]: -3847
        a[4]: -3
        a[5]: 3
        a[6]: 5
        a[7]: 394
        a[8]: -876
        a[9]: -2

        Negative elements of array are: -10, -4, -3847, -3, -876, -2,
*/