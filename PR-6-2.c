#include<stdio.h>
int main()
{
	char str[100];
	int i,count;
	printf("Enter a string: ");
	scanf("%s",str);
	printf("\nFrequency of each letter :\n");
	for(i=0;str[i]!='\0';i++)
	{
		count =1;
		
		if(str[i]=='0')
		continue;
		
		for(int j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
			count++;
			str[j]='0';
			}
		}
		printf("\n%c => %d",str[i],count);
	}
}
/*
Output:
Enter a string: continuation

Frequency of each letter :

c => 1
o => 2
n => 3
t => 2
i => 2
u => 1
a => 1
*/