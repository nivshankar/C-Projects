#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int length=0;
    printf("\n\tEnter any string: ");
    gets(str); 
    ptr=&str;
    while(*ptr!='\0')
    {
    	length++;
    	ptr++;
	}
    printf("\n\tLength of a string is : %d\n",length);
}
/*
Output:

        Enter any string: Neev Shankar

        Length of a string is : 12

*/
