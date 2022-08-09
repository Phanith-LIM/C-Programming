#include <stdio.h>
int main(){
    int i=100, j=0;

    //set the range of value
    for (i = 100; i <= 200; i++){

        //check if it's divisible by 5 and not by 6
        if(i % 5 == 0 && i % 6 != 0){
            printf("%d ", i);
            j = j + 1;

            //check if we have printed 10 times in a line
            if(j % 10 == 0){
            printf("\n");
            }
        }

        //check if it's divisible by 6 and not by 5
        else if(i % 6 == 0 && i % 5 != 0){
            printf("%d ", i);
            j = j + 1;
            //check if we have printed 10 times in a line
            if(j % 10 == 0){
            printf("\n");
            }
        }
    }
return 0; 
}