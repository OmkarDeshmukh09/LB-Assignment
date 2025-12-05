#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkSmallChar(char ch)
{
    if ((ch >= 97) && (ch <= 122) )
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

    bRet = ChkSmallChar(cValue);

    if (bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("Its not Small case Character");
    }
    
    return 0 ;
}