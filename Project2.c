#include<stdio.h>
int main()
{
	float Base,HRA,DA,TA,Gross;
	printf("\nEnter Your Base Salary:\n");
	scanf("%f",&Base);
	printf("Enter HRA%c:\n",'%');
	scanf("%f",&HRA);
	printf("Enter DA%c:\n",'%');
	scanf("%f",&DA);
	printf("Enter TA%c:\n",'%');
	scanf("%f",&TA);
	Gross=Base+(HRA/100.0)*Base+(DA/100.0)*Base+(TA/100.0)*Base;
	printf("\nYour Gross Salary is: %.2f",Gross);
}
/*
Output:
Enter Your Base Salary:
7344
Enter HRA%:
10
Enter DA%:
23
Enter TA%:
12

Your Gross Salary is: 10648.80
*/