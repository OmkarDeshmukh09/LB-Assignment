#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkAlpha(char ch)
{
    if ((ch >= 65 && ch <= 90) )
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("Its not a Capital Character");
    }
    
    return 0 ;
}