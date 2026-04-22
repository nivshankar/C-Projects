#include<stdio.h>

int main()
{
	char str[100],ch[100];
	int i,length=0,palindrome=0;
	printf("\n\tEnter Your String: ");	
	gets(str);
	for( i=0;str[i]!='\0';i++)
	{
		length++;
	}
	for(int j=0;str[j]!='\0';j++)
	{
		ch[j]=str[length-j-1];
		i--;
	}
	printf("\n\tReverse string is : %s",ch);
	for(int j=0;str[j]!=0;j++)
	{
		if(str[j]!=ch[j])
		{
			palindrome=1;
		}
	}
	if(palindrome==1)
	printf("\n\n\tThe string is not palindrome.\n");
	else
	printf("\n\n\tThe string is palindrome.\n");
}
/*
Output :
Case 1)

        Enter Your String: veev

        Reverse string is : veev

        The string is palindrome.
        
Case 2)

        Enter Your String: Abcdf

        Reverse string is : fdcbA

        The string is not palindrome.

*/