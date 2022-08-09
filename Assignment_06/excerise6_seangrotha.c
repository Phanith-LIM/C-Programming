#include <stdio.h>
int main()
{
	int num1, num2;
	//get input from user
	printf("Enter two integers number.\n");
	printf("Enter number1: ");scanf("%d", &num1);
	printf("Enter number2: ");scanf("%d", &num2);
	//decision
	if(num1 == num2){
		printf("number1 = number2\n");
		printf("result %d = %d\n",num1, num2);
	}
	else if(num1 > num2){
		printf("number1 > number2\n");
		printf("Result %d > %d\n",num1, num2);
	}
	else{
		printf("number1 < number2\n");
		printf("Result %d < %d\n",num1, num2);
	}
	return 0;
}
