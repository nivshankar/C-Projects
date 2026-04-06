#include<stdio.h>
int main()
{
	int marks;
	char grade;
	printf("Enter your marks out of 100:\n");
	scanf("%d",&marks);
	if(marks>=0&&marks<=100)
	{
		marks>=35
		?(marks>=50
		  ?(marks>=65
		    ?(marks>=85
			  ?(grade='A')
			  :(grade='B')
			 )
		    :(grade='C')
		   )
		  :(grade='D')
		 )
		:(grade='F');
	}
	else
	printf("Invalid marks....");
	
	switch(grade)
	{
		case 'A':
			printf("\nYour Grade is %c.",grade);
			printf("\nExcellent Work!");
			printf("\nCongratulations! You are eligible for the next level");
			break;
		case 'B':
			printf("\nYour Grade is %c.",grade);
			printf("\nWell Done");
			printf("\nCongratulations! You are eligible for the next level");
			break;
		case 'C':
			printf("\nYour Grade is %c.",grade);
			printf("\nGood Job");
			printf("\nCongratulations! You are eligible for the next level");
			break;
		case 'D':
			printf("\nYour Grade is %c.",grade);
			printf("\nYou passed,but you could do better");
			printf("\nCongratulations! You are eligible for the next level");
			break;
		case 'F':
			printf("\nYour Grade is %c.",grade);
			printf("\nSorry you failed");
			printf("\nPlease try again next time.");
			break;
	}
	
}
/*
Output:
Case 1)
Enter your marks out of 100:
32

Your Grade is F.
Sorry you failed

Case 2)
Enter your marks out of 100:
40

Your Grade is D.
You passed,but you could do better
Congratulations! You are eligible for the next level

Case 3)
Enter your marks out of 100:
63

Your Grade is C.
Good Job
Congratulations! You are eligible for the next level

Case 4)
Enter your marks out of 100:
75

Your Grade is B.
Well Done
Congratulations! You are eligible for the next level

Case 5)
Enter your marks out of 100:
98

Your Grade is A.
Excellent Work!
Congratulations! You are eligible for the next level
*/