#include <stdio.h>
/*
    1hour = 3600s
    1day  = 3600*24 = 86400s
    1year = 365*86400 = 31536000s
    5year = 31536000*5 = 15768000s
*/
int main ()
{
    int sec_5year = 157680000;

    //Number of Baby,dead,immigrant in 5 years
    int num_baby = sec_5year/6;         // 26 280 000
    int num_dead = sec_5year/15;        // 10 512 000
    int num_immigrant =  sec_5year/45;  //  3 504 000

    //Total USA Population in 5years
    int usa_5year = 312032486 + num_baby - num_dead + num_immigrant; //331 304 486
    printf("USA population in 5 year : %d\n",usa_5year);
    return 0;
}