#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void green(){
    printf("\033[0;32m");
}
void reset(){
    printf("\033[0m");
}
int main()
{
    int menu;
    //1.Binary to Decimal
    char binary[30];
    int decimal_in = 0,lenght_of_in = 0,lenght_in_run,isBinary = 1;
    float decimal_float = 0,decimal;
    char bin_digits[] = "01.";
    //2.Decimal to Binary
    int isDec = 1,binary_of_in[32],binary_of_f,count_in = 0,count_f = 0,decimal_f = 0;
    char decimal_1[30];
    char dec_digits[] = "0123456789.";
    //3.Octal to Decimal
    int isOctal = 1;
    char octal[30];
    char octal_digits[] = "01234567.";
    //4.Decimal to Octal
    int octal_of_in[32],octal_of_f;
    //7.Decimal to Hexadecimal
    char hexa[30];
    int store_hex;
    //8.Hexadecimal to decimal
    char hexa_digits[] = "0123456789ABCDEF.";
    int isHexa = 1,store_digit;
    green();
    printf("(Number System Conversion)");
    reset();
    printf("\n1.Binary to Decimal\n2.Decimal to Binary\n3.Octal to Decimal \n4.Decimal to Octal\n5.Octal to Binary\n6.Binary to Octal\n7.Decimal to Hexadecimal\n8.Hexadecimal to Decimal\n9.Hexadecimal to Binary\n10.Binary to Hexadecimal\n");
    
    printf("\nEnter number in menu : ");
    scanf("%d",&menu);
    switch(menu)
    {
    case 1 :
        printf("\n1.Binary to Decimal\n");
        printf("\tBinary number: ");
        scanf("%s",binary);
        //Check if the number is binary
        for(int i = 0; i < strlen(binary); i++)
        {
            if(strchr(bin_digits, binary[i]) == NULL)
            {
                isBinary = 0;
                printf("\tThis is %s not binary number\n",binary);
                break;
            }
        }
        if (isBinary)
        {
            //Find Lenght of integer part
            //Lenght of integer part
            for (int i = 0; i < strlen(binary); i++)
            {
                if (binary[i] == '.')
                {
                    break;
                }
                lenght_of_in++;
            }
            lenght_in_run =  lenght_of_in;
            // startExponent after find '.'
            int n = 1;
            //Convert binary in integer part
            for(int i = 0; i < lenght_in_run; i++)
            {
                decimal_in = decimal_in + (binary[i] - '0') * pow(2, lenght_of_in-1);
                lenght_of_in--;
            }
            //Convert binary in fractional part
            for (int i = lenght_in_run ; i < strlen(binary); i++)
            {
                if (binary[i] == '.')
                {
                    continue;
                }
                decimal_float = decimal_float + (binary[i] - '0') / pow(2, n);
                n++;
            }
            //Sum decimal_in with decimal_foat
            decimal = decimal_in + decimal_float;
            printf("\tDecimal number: %g\n",decimal);
        }
        break;
    case 2 :
        printf("\n2.Decimal to Binary\n");
        printf("\tDecimal number: ");
        scanf("%s",decimal_1);
        //Check number is decimal
        for(int i = 0; i < strlen(decimal_1); i++)
        {
            if(strchr(dec_digits, decimal_1[i]) == NULL)
            {
                isDec = 0;
                printf("\tThis is %s not decimal number\n",decimal_1);
                break;
            }
        }
        if (isDec)
        {
            //Convert string to number
            //Count digit integer part and float part
            for (int i = 0; i < strlen(decimal_1); i++)
            {
                if (decimal_1[i] == '.')
                {
                    break;
                }
                count_in++;
            }
            //digit fo float part
            count_f = (strlen(decimal_1)-1) - count_in;
            int n = 0,j = 1;
            //Convert string to decimal integer
            for (int i = 0 ; i < count_in; i++)
            {
                decimal_in = decimal_in*10 + decimal_1[i] - '0';
            }
            //Convert string to decimal float
            for (int i =  count_in ; i < strlen(decimal_1); i++)
            {
                if (decimal_1[i] == '.')
                {
                    continue;
                }
                decimal_f = decimal_f*10 + decimal_1[i] - '0';
            }
            decimal_float = decimal_f*pow(10,-count_f);
            printf("\tBinary nummber: ");
            //if user input decimal_in = 0, print 0
            if (decimal_in == 0)
            {
                printf("0");
            } 
            //if decimal_in >= 1
            //divide decimal_in by 2 to find remainder and store in binary_of_in[n]
            while (decimal_in >= 1)
            {
                binary_of_in[n] = decimal_in % 2;
                decimal_in = decimal_in / 2;
                n++;
            }
            //print binary at integer part
            for (int i =  n-1  ; i >= 0 ; i--)
            {
                printf("%d",binary_of_in[i]);
            }
            //print '.' because we need to split integer and fractional part
            if (decimal_float > 0)
            {
                printf(".");
            }
            //if decimal_in > 0
            //multiply decimal_float by 2 to and find whole number and print 
            while (decimal_float > 0)
            {
                decimal_float = decimal_float * 2;
                binary_of_f = decimal_float;
                printf("%d",binary_of_f);
                if ( binary_of_f == 1)
                {
                    decimal_float = decimal_float - binary_of_f;
                }
            }
            printf("\n");
        }
        break;
    case 3 :
        printf("\n3.Octal to Decimal\n");
        printf("\tOctal number : ");
        scanf("%s",octal);
        //check is octal
        for (int i = 0; i < strlen(octal); i++)
        {
            if (strchr(octal_digits, octal[i]) == NULL)
            {
                isOctal = 0;
                printf("\tThis is %s not octal number\n",octal);
                break;
            } 
        }
        if (isOctal)
        {
            //Count digit integer part and float part
            for(int i = 0; i < strlen(octal); i++)
            {
                if (octal[i] == '.')
                {
                    break;
                }
                lenght_of_in++;
            }
            lenght_in_run =  lenght_of_in;
            // startExponent after find '.'
            int n = 1;
            //Convert octal of integer part
            for(int i = 0; i < lenght_in_run; i++)
            {
                decimal_in = decimal_in + (octal[i] - '0') * pow(8, lenght_of_in-1);
                lenght_of_in--;
            }
            //Convert octal of float part
            for (int i = lenght_in_run ; i < strlen(octal); i++)
            {
                if (octal[i] == '.')
                {
                    continue;
                }
                decimal_float = decimal_float + (octal[i] - '0') / pow(8, n);
                n++;
            }
            //Sum decimal_in with decimal_float
            decimal = decimal_in + decimal_float;
            printf("\tDecimal number : %g\n",decimal);
        }
        break;
    case 4 :
        printf("\n4.Decimal to Octal\n");
        printf("\tDecimal number: ");
        scanf("%s",decimal_1);
        //Check number is decimal
        for(int i = 0; i < strlen(decimal_1); i++)
        {
            if(strchr(dec_digits, decimal_1[i]) == NULL)
            {
                isDec = 0;
                printf("\tThis is %s not decimal number\n",decimal_1);
                break;
            }
        }
        if (isDec)
        {
            decimal_in = atoi(decimal_1);
            decimal_float = atof(decimal_1) - decimal_in;
            printf("\tOctal nummber: ");
            //Convert decimal of integer part to octal
            int n = 0;
            if (decimal_in == 0)
            {
                printf("0");
            }
            while (decimal_in >= 1)
            {
                octal_of_in[n] = decimal_in % 8;
                decimal_in = decimal_in / 8;
                n++;
            }
            for (int i =  n-1  ; i >= 0 ; i--)
            {
                printf("%d",octal_of_in[i]);
            }
            if (decimal_float > 0){
                printf(".");
            }
            //Convert decimal of float part to octal
            for (int i = 0 ; i < 7 ;i++)
            {
                if(decimal_float > 0)
                {
                    decimal_float = decimal_float * 8;
                    octal_of_f = decimal_float;
                    printf("%d",octal_of_f);
                    if ( octal_of_f > 0){
                        decimal_float = decimal_float - octal_of_f;
                    }
                }
            }
            printf("\n");
        }
        break;
    case 5 :
        printf("\n5.Octal to Binary\n");
        printf("\tOctal number: ");
        scanf("%s",octal);
        //check is octal
        for(int i = 0; i < strlen(octal); i++)
        {
            if(strchr(octal_digits, octal[i]) == NULL){
                isOctal = 0;
                printf("\tThis is %s not octal number\n",octal);
                break;
            }
        }
        if (isOctal)
        {
            printf("\tBinary number: ");
            //Convert Octal to binary by using table
            for (int i = 0; i < strlen(octal) ; i++)
            {
                switch (octal[i])
                {
                case '0':
                    printf("000");
                    break;
                case '1':
                    printf("001");
                    break;
                case '2':
                    printf("010");
                    break;
                case '3':
                    printf("011");
                    break;
                case '4':
                    printf("100");
                    break;
                case '5':
                    printf("101");
                    break;
                case '6':
                    printf("110");
                    break;
                case '7':
                    printf("111");
                    break;
                default:
                    printf(".");
                    break;
                }
            }
            printf("\n");
        }
        break;
    case 6 :
        printf("\n6.Binary to Octal\n");
        printf("\tBinary number: ");
        scanf("%s",binary);
        //Check if the number is binary
        for(int i = 0; i < strlen(binary); i++)
        {
            if(strchr(bin_digits, binary[i]) == NULL){
                isBinary = 0;
                printf("\tThis is %s not binary number\n",binary);
                break;
            }
        }
        if (isBinary)
        {
            //*Binary to decimal
            //Find Lenght of integer part and fractional part
            printf("\tOctal number : ");
            //Lenght of integer part
            for (int i = 0; i < strlen(binary); i++)
            {
                if (binary[i] == '.')
                {
                    break;
                }
                lenght_of_in++;
            }
            lenght_in_run = lenght_of_in;
            // startExponent after find '.' at franctional part
            int n = 1;
            //Convert binary in integer part
            for(int i = 0; i < lenght_in_run; i++)
            {
                decimal_in = decimal_in + (binary[i] - '0') * pow(2, lenght_of_in-1);
                lenght_of_in--;
            }
            //Convert binary in fractional part
            for (int i = lenght_in_run ; i < strlen(binary); i++)
            {
                if (binary[i] == '.')
                {
                    continue;
                }
                decimal_float = decimal_float + (binary[i] - '0') / pow(2, n);
                n++;
            }

            //*Decimal to octal
            n = 0;
            int j = 1;
            //Convert decimal of integer part to octal
            if (decimal_in == 0)
            {
                printf("0");
            }
            while (decimal_in >= 1)
            {
                octal_of_in[n] = decimal_in % 8;
                decimal_in = decimal_in / 8;
                n++;
            }
            for (int i =  n-1  ; i >= 0 ; i--){
                printf("%d",octal_of_in[i]);
            }
            if (decimal_float > 0){
                printf(".");
            }
            //Convert decimal of float part to octal
            for (int i = 0 ; i < 7 ;i++)
            {
                if(decimal_float > 0)
                {
                    decimal_float = decimal_float * 8;
                    octal_of_f = decimal_float;
                    printf("%d",octal_of_f);
                    if ( octal_of_f > 0){
                        decimal_float = decimal_float - octal_of_f;
                    }
                }
            }
            printf("\n");
        }
        break;
    case 7 :
        printf("\n7.Decimal to Hexadecimal\n");
        printf("\tDecimal number: ");
        scanf("%s",decimal_1);
        //Check number is decimal
        for(int i = 0; i < strlen(decimal_1); i++)
        {
            if(strchr(dec_digits, decimal_1[i]) == NULL){
                isDec = 0;
                printf("\tThis is %s not decimal number\n",decimal_1);
                break;
            }
        }
        if (isDec)
        {
            //Convert string to decimal integer
            decimal_in = atoi(decimal_1);
            decimal_float = atof(decimal_1) - decimal_in;
            int i = 0;
            printf("\tHexadecimal number: ");
            if (decimal_in == 0){
                printf("0");
            }
            while (decimal_in >= 1)
            {
                switch (decimal_in % 16) 
                {
                case 10:
                    hexa[i] = 'A';
                    break;
                case 11:
                    hexa[i] = 'B';
                    break;
                case 12:
                    hexa[i] = 'C';
                    break;
                case 13:
                    hexa[i] = 'D';
                    break;
                case 14:
                    hexa[i] = 'E';
                    break;
                case 15:
                    hexa[i] = 'F';
                    break;
                default:
                    hexa[i] = (decimal_in % 16) + '0';
                    break;
                }
                    decimal_in = decimal_in / 16;
                    i++;
            }
            //print reverse of hexa array
            for (int j = i - 1; j >= 0; j--){
                printf("%c",hexa[j]);
            }
            if (decimal_float > 0){
                printf(".");
            }
            //use for loop because we don't when decimal_float x 16 is the end
            for (int i = 0 ; i < 7 ;i++)
            {
                if(decimal_float > 0)
                {
                    decimal_float = decimal_float * 16;
                    store_hex = decimal_float;
                    if ( store_hex > 0)
                    {
                        decimal_float = decimal_float - store_hex;
                    }
                    switch (store_hex) 
                    {
                    case 10:
                        hexa[i] = 'A';
                        break;
                    case 11:
                        hexa[i] = 'B';
                        break;
                    case 12:
                        hexa[i] = 'C';
                        break;
                    case 13:
                        hexa[i] = 'D';
                        break;
                    case 14:
                        hexa[i] = 'E';
                        break;
                    case 15:
                        hexa[i] = 'F';
                        break;
                    default:
                        hexa[i] = store_hex + '0';
                        break;
                    }
                    printf("%c",hexa[i]);
                }
            }
            printf("\n");
        }
        break;
    case 8 :
        printf("\n8.Hexadecimal to Decimal\n");
        printf("\tHexadecimal number: ");
        scanf("%s",hexa);
        //Check if the number is hexa
        for(int i = 0; i < strlen(hexa); i++)
        {
            if(strchr(hexa_digits,hexa[i]) == NULL){
                isHexa = 0;
                printf("\tThis is %s not hexadecimal number\n",hexa);
                break;
            }
        }
        if (isHexa)
        {
            int n = 0,j = 1;
            //Find Lenght of integer part
            //Lenght of integer part
            for (int i = 0; i < strlen(hexa); i++)
            {
                if (hexa[i] == '.')
                {
                    break;
                }
                lenght_of_in++;
            }
            //Convert hexa to decimal at integer part
            for (int i = lenght_of_in - 1; i >= 0; i--)
            {
                switch (hexa[i]) 
                {
                case 'A':
                    store_digit = 10;
                    break;
                case 'B':
                    store_digit = 11;
                    break;
                case 'C':
                    store_digit = 12;
                    break;
                case 'D':
                    store_digit = 13;
                    break;
                case 'E':
                    store_digit = 14;
                    break;
                case 'F':
                    store_digit = 15;
                    break;
                default:
                    store_digit = hexa[i] - '0';
                    break;
                }
                decimal_in = decimal_in + store_digit*pow(16, n);
                n++;
            }
            //Convert hexa to decimal at float part
            for (int i = lenght_of_in ; i < strlen(hexa); i++)
            {
                if (hexa[i] == '.')
                {
                    continue;
                }
                switch (hexa[i])
                {
                case 'A':
                    store_digit = 10;
                    break;
                case 'B':
                    store_digit = 11;
                    break;
                case 'C':
                    store_digit = 12;
                    break;
                case 'D':
                    store_digit = 13;
                    break;
                case 'E':
                    store_digit = 14;
                    break;
                case 'F':
                    store_digit = 15;
                    break;
                default:
                    store_digit = hexa[i] - '0';
                    break;
                }
                decimal_float = decimal_float + store_digit*pow(16, -j);
                j++;
            }
            decimal = decimal_in + decimal_float;
            printf("\tDecimal number: %g\n",decimal);
        }
        break;
    case 9 :
        printf("\n9.Hexadecimal to Binary\n");
        printf("\tHexadecimal number: ");
        scanf("%s",hexa);
        //Check if the number is hexa
        for(int i = 0; i < strlen(hexa); i++)
        {
            if(strchr(hexa_digits,hexa[i]) == NULL){
                isHexa = 0;
                printf("\tThis is %s not hexadecimal number\n",hexa);
                break;
            }
        }
        if (isHexa)
        {
            int i = 0;
            printf("\tBinary number: ");
            while (hexa[i])
            {
                switch (hexa[i])
                {
                case '0':
                    printf("0000");
                    break;
                case '1':
                    printf("0001");
                    break;
                case '2':
                    printf("0010");
                    break;
                case '3':
                    printf("0011");
                    break;
                case '4':
                    printf("0100");
                    break;
                case '5':
                    printf("0101");
                    break;
                case '6':
                    printf("0110");
                    break;
                case '7':
                    printf("0111");
                    break;
                case '8':
                    printf("1000");
                    break;
                case '9':
                    printf("1001");
                    break; 
                case 'A':
                    printf("1010");
                    break;
                case 'B':
                    printf("1011");
                    break;
                case 'C':
                    printf("1100");
                    break;
                case 'D':
                    printf("1101");
                    break;
                case 'E':
                    printf("1110");
                    break;
                case 'F':
                    printf("1111");
                    break;                     
                default:
                    printf(".");
                    break;
                }
                i++;
            }
            printf("\n");   
        }
        break;
    case 10 :
        printf("\n10.Binary to Hexadecimal\n");
        printf("\tBinary number: ");
        scanf("%s",binary);
        //Check if the number is binary
        for(int i = 0; i < strlen(binary); i++)
        {
            if(strchr(bin_digits, binary[i]) == NULL){
                isBinary = 0;
                printf("\tThis is %s not binary number\n",binary);
                break;
            }
        }
        if (isBinary)
        {
            //*Binary to Decimal
            //Find Lenght of integer part
            //Lenght of integer part
            for (int i = 0; i < strlen(binary); i++)
            {
                if (binary[i] == '.')
                {
                    break;
                }
                lenght_of_in++;
            }
            lenght_in_run =  lenght_of_in;
            // startExponent after find '.'
            int n = 1;
            //Convert binary in integer part
            for(int i = 0; i < lenght_in_run; i++)
            {
                decimal_in = decimal_in + (binary[i] - '0') * pow(2, lenght_of_in-1);
                lenght_of_in--;
            }
            //Convert binary in fractional part
            for (int i = lenght_in_run ; i < strlen(binary); i++)
            {
                if (binary[i] == '.')
                {
                    continue;
                }
                decimal_float = decimal_float + (binary[i] - '0') / pow(2, n);
                n++;
            }
            int i = 0;
            //*Decimal to hexadecimal
            //decimal_in to Hexa
            printf("\tHexadecimal number: ");
            //if decimal_in = 0, print 0
            if (decimal_in == 0){
                printf("0");
            } 
            while (decimal_in >= 1)
            {
                switch (decimal_in % 16) 
                {
                case 10:
                    hexa[i] = 'A';
                    break;
                case 11:
                    hexa[i] = 'B';
                    break;
                case 12:
                    hexa[i] = 'C';
                    break;
                case 13:
                    hexa[i] = 'D';
                    break;
                case 14:
                    hexa[i] = 'E';
                    break;
                case 15:
                    hexa[i] = 'F';
                    break;
                default:
                    hexa[i] = (decimal_in % 16) + '0';
                }
                decimal_in = decimal_in / 16;
                i++;
             }
            for (int j = i - 1; j >= 0; j--)
            {
                printf("%c",hexa[j]);
            }
            if (decimal_float > 0)
            {
                printf(".");
            }
             //decimal_float to Hexa
            for (int i = 0 ; i < 7 ;i++)
            {
                if(decimal_float > 0)
                {
                    decimal_float = decimal_float * 16;
                    store_hex = decimal_float;
                    if ( store_hex > 0)
                    {
                        decimal_float = decimal_float - store_hex;
                    }
                    switch (store_hex) 
                    {
                    case 10:
                        hexa[i] = 'A';
                        break;
                    case 11:
                        hexa[i] = 'B';
                        break;
                    case 12:
                        hexa[i] = 'C';
                        break;
                    case 13:
                        hexa[i] = 'D';
                        break;
                    case 14:
                        hexa[i] = 'E';
                        break;
                    case 15:
                        hexa[i] = 'F';
                        break;
                    default:
                        hexa[i] = store_hex + '0';
                    }
                    printf("%c",hexa[i]);
                }
            }
        }
        printf("\n");
        break;
    default:
        printf("\tThis %d is not in the menu\n",menu);
        break;
    }
    return 0;
}   