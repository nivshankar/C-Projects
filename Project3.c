#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,total=180;
	printf("Give angle 1 of Triangle:\n");
	scanf("%d",&angle1);
	printf("\nGive angle 2 of Triangle:\n");
	scanf("%d",&angle2);
	angle3=total-angle1-angle2;
	printf("\nThe Angle 3 of Triangle is:%d\n ",angle3);
}
/*
Output: 
Give angle 1 of Triangle:
65

Give angle 2 of Triangle:
45

The Angle 3 of Triangle is:70

*/