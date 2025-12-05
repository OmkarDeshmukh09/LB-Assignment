//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FirstChar
//  Description:    To return the index of first occurance of the character
//  Input:          String,Character
//  Output:         int
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int FirstChar(char str[], char ch)
{
    int iCnt = 0;
    char temp = ch;

    if (temp >= 'A' && temp <= 'Z')
    {
        temp = temp + 32;
    }
    // Case insensitive
    while (*str != '\0')
    {
        iCnt++;
        char strCpy = *str;
        if (strCpy >= 'A' && strCpy <= 'Z')
        {
            strCpy = strCpy + 32;
        }

        if (strCpy == temp)
        {
            return iCnt - 1;
            break;
        }
        else
        {
            return -1;
        }
        str++;
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String:\n");
    scanf(" %[^\n]s", Arr);

    printf("Enter the Character to check:\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    if (iRet == -1)
    {
        printf("This Character in not present in the string.\n");
    }
    else
    {
        printf("first occurance of the character is at index: %d\n", iRet);
    }
    return 0;
}
