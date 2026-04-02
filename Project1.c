#include<stdio.h>
int main()
{
	float a;
	printf("Enter Temperature in Celsius: \n");
	scanf("%f",&a);
	printf("The temperature in farenheit is: %.2f",((9.0/5.0)*a+32));
}
/*
Output:
Enter TEmperature in Celsius:
67
The temperature in farenheit is: 152.60
*/
