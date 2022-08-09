#include<stdio.h>
#include<math.h>
int main(){
	int i;
    
    //find if cube of the integer is less than 12000
	for(i = 2 ; pow(i,3) < 12000 ;i+=2)
    {

    }

    //print the integer
    printf("the largest integer cube less than 12000 is : %d\n",i-2);
	return 0;
}