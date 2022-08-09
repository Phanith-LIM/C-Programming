#include<stdio.h>
int main()
{
	float kg,pounds;
	//Request value in kilogram from user
	printf("Please inter your kilograms : ");	
	scanf("%f", &kg);

	//Convert kilogram to pounds	
	pounds = kg*2.204;

	//display result in pounds	
	printf("Your pounds is %.3f\n",pounds);  
	return 0;
}
