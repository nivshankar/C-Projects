#include<stdio.h>
int main()
{
	char ch='a';
	do
	{
		printf("%c ",ch);
		ch+=4;
	}while(ch<='z');
}
/*
Output:
a e i m q u y
*/
