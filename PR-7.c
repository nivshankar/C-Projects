#include<stdio.h>
int choice()
{//TNRS
	printf("\n\tPress 1 for + \n\tPress 2 for - \n\tPress 3 for *");
	printf("\n\tPress 4 for / \n\tPress 5 for %c\n\tPress 0 for Exit",37);
	int c;
	printf("\n\n\tEnter your choice: ");
	scanf("%d",&c);
	return c;
}

void Add()
{//TNRN
	int a,b;
	printf("\n\tEnter the first Numnber: ");
	scanf("%d",&a);
	printf("\tEnter the second Numnber: ");
	scanf("%d",&b);
	printf("\tAddition of %d and %d is %d\n",a,b,a+b);
}

int Subtract(int a,int b)
{//TSRS
	return a-b;

}
int multiply(int a,int b)
{//TSRN
	printf("\tMultiplication of %d and %d is %d\n",a,b,a*b);
}
void Division()
{//TNRN
	float a,b;
	printf("\n\tEnter the first Numnber: ");
	scanf("%f",&a);
	printf("\tEnter the second Numnber: ");
	scanf("%f",&b);
	printf("\tDivision of %.2f by %.2f is %.2f\n",a,b,a/b);
}
void Remainder()
{//TNRN
	int  a,b;
	printf("\n\tEnter the first Numnber: ");
	scanf("%d",&a);
	printf("\tEnter the second Numnber: ");
	scanf("%d",&b);
	printf("\tRemainder of %d divided by %d is %d\n",a,b,a%b);
}
int main()
{
	for(int i=1;i<2;i--)
	{
		int ch=choice();
		int a,b;
		switch(ch)
		{
			case 0:
			printf("\n\tThank you for using ,came back soon.");
			return 0;
			break;
		
			case 1:
			Add();
			break;
			
			case 2:
				
			printf("\n\tEnter the first Numnber: ");
			scanf("%d",&a);
			printf("\tEnter the second Numnber: ");
			scanf("%d",&b);	
			printf("\tSubstraction of %d and %d is %d\n",a,b,Subtract(a,b));
			break;
			
			case 3:
				
			printf("\n\tEnter the first Numnber: ");
			scanf("%d",&a);
			printf("\tEnter the second Numnber: ");
			scanf("%d",&b);	
			multiply(a,b);
			break;
			
			case 4:
			Division();
			break;
			
			case 5:
			Remainder();
			break;
			
			default:
			printf("\n\tInvalid choice\n");
		}
	}
}
/*
Output: 

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 1

        Enter the first Numnber: 1
        Enter the second Numnber: 3
        Addition of 1 and 3 is 4

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 2

        Enter the first Numnber: 45
        Enter the second Numnber: 67
        Substraction of 45 and 67 is -22

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 3

        Enter the first Numnber: 45
        Enter the second Numnber: 3
        Multiplication of 45 and 3 is 135

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 65

        Invalid choice

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 4

        Enter the first Numnber: 34
        Enter the second Numnber: 6
        Division of 34.00 by 6.00 is 5.67

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 5

        Enter the first Numnber: 34
        Enter the second Numnber: 3
        Remainder of 34 divided by 3 is 1

        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for Exit

        Enter your choice: 0

        Thank you for using ,came back soon.
*/