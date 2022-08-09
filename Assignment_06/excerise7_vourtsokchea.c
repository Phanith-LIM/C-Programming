#include <stdio.h> 
int main() 
{  
    //get character from user
    char character;
    printf("Enter a Character: ");  
    scanf("%c", &character);  
    //decision
    if((character >= 'a' && character <= 'z')||(character >='A' && character <='Z'))
    {  
        printf("%c is an Alphabet\n", character);  
    } else if(character >= '0' && character <= '9') 
    {
        printf("%c is a Digit \n", character);  
    } else {
        printf("%c is a Special Character\n", character);  
    }
    return 0;  
}