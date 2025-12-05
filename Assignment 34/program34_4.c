//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

typedef int BOOL;
#define true 1
#define false 0
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkSpecial
//  Description:    To check given Character is special symbol or not
//  Input:          Character
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    BOOL bflag = false;

    if (ch >= '!' && ch <= '/')
    {
        bflag = true;
    }
    else if (ch >= ':' && ch <= '@')
    {
        bflag = true;
    }
    else if (ch >= '[' && ch <= '`')
    {
        bflag = true;
    }
    else if (ch >= '{' && ch <= '~')
    {
        bflag = true;
    }
    else
    {
        bflag = false;
    }
    return bflag;
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{

    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the Charcter  \n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("It is a Special Symbol");
    }
    else
    {
        printf("It is not a Special Symbol");
    }

    return 0;
}
/*

Case 1:

Enter the Charcter
1
It is not a Special Symbol

Case 2:
Enter the Charcter
#
It is a Special Symbol

Case 3:
Enter the Charcter
a
It is not a Special Symbol
*/