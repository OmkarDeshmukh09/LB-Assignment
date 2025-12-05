#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkDigit(char ch)
{
    if ((ch >= 48) && (ch <= 57) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue ='\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("Its not a Digit");
    }
    
    return 0 ;
}