#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(;n!=0;n/=10)
	{
		i++;
	}
	printf("Total Number of digits: %d",i);
}
/*
Output:
Enter any number:
38987
Total Number of digits: 5
*/