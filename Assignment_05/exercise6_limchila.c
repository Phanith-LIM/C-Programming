#include <stdio.h>
int main(){
    int x, y, temp;

    //get 2 integers(x and y) from the user
    printf("Enter an integer(x): ");
    scanf("%d", &x);
    printf("Enter another integer(y): ");
    scanf("%d", &y);

    //swap the 2 integers
    temp = x;
    x = y;
    y = temp;

    //print the result to the terminal
    printf("x = %d\ny = %d", x, y);
    
    return 0;
}