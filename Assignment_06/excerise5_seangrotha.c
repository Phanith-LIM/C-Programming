#include <stdio.h>
int main(){
	int num;
	//get imput from user
	printf("Enter Number integers: ");
	scanf("%d",&num);
	//descision
	if(num < 10  )
    {
		printf("Too low\n");
	}
	else if(num >= 10 && num <= 20){
		printf("Correct\n");
	}
	else{
		printf("Too high\n");
	}
	return 0;
}