#include<stdio.h>
int main()
{
	int n,last,first;
	printf("Enter any number:\n");
	scanf("%d",&n);
	last=n%10;
	for(;n>=10;n/=10);
	first=n;
	printf("The sum of last and first digit is: %d",first+last);
}
/*
Output  :
Enter any number:
9876
The sum of last and first digit is: 15
*/