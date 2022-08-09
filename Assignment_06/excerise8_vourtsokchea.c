#include<stdio.h>
int main()
{
	// get char from user
	char x;
	
	printf("Enter what you want : ");
	scanf ("%c", &x);
	//decision
	if ((x>='a' && x<='z')||(x >= 'A' && x<='Z'))
    {
        printf("%c is a alphabet",x);
        switch(x)
	    {
		case 'a':
			printf(" and %c is a vowel\n",x);
			break;
		case 'e':
			printf(" and %c is a vowel\n",x);
			break;
		case 'i':
			printf(" and %c is a vowel\n",x);
			break;
		case 'o':
			printf(" and %c is a vowel\n",x);
			break;
		case 'u':
			printf(" and %c is a vowel\n",x);
			break;
		default:
			printf(" and %c is a consonant\n",x);
	    }
    }else
    {
       printf("%c is not a alphabet \n",x);
    }
    return 0;
}