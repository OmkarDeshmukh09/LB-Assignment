#include<stdio.h>

typedef int BOOL ;

#define TRUE 1 
#define FALSE 0 

BOOL CheckVowel(char CValue)
{
    if(CValue =='A'||CValue =='E'||CValue =='I'||CValue =='O'||CValue =='U'||
       CValue =='a'||CValue =='e'||CValue =='i'||CValue =='o'||CValue =='u' )
       {
            return TRUE;
       }
    else
    {
        return FALSE;    
    }   
}

int main()
{
    char cValue ='\0';
    BOOL bret = FALSE;

    printf("Enter Character \n");

    scanf("%c",&cValue);

    bret = CheckVowel(cValue);

    if(bret == TRUE)
    {
        printf("It's a Vowel");
    }
    else
    {
        printf("It's not a Vowel");
    }
    return 0 ;
}