#include <stdio.h>
int main(){
    int numbers[] = {15, 8, 16, 5, 0, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    //run loop for the first number in the comparison
    for (int i = 0; i < size; i++){

        //run loop for the second number in the comparison
        for (int j = i + 1; j < size; j++){

            //check if the number isn't larger than the right side numbers
            if (numbers[i] < numbers[j]){
                break;
            }
            //check if the number is larger than all the right side numbers
            if (j == size-1){
                printf("%d ", numbers[i]);
            }
        }
    }
    return 0;
}