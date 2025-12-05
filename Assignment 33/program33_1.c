#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkAlpha(char ch)
{
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) )
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

    printf("Enteer the Character");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("Its not a Character");
    }
    
    return 0 ;
}