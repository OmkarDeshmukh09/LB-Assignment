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
//  Function Name:  CheckVowel
//  Description:    To check if it contains a vowels or not
//  Input:          String
//  Output:         int
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////
BOOL CheckVowel(char *str)
{
    BOOL bflag = false;

    while (*str != '\0')
    {

        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bflag = true;
        }
        str++;
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
    char Arr[50] = {'\0'};
    BOOL bRet = false;

    printf("Enter the string:\n");
    scanf("%[^\n]s", Arr);

    bRet = CheckVowel(Arr);

    if (bRet == true)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("Not contains any Vowels\n");
    }

    return 0;
};