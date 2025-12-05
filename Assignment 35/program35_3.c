//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Diffrence
//  Description:    To get the Diffrence between no.of Capital and small letters
//  Input:          String
//  Output:         int
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int Diffrence(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;
    int iDiff = 0;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        if (*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        str++;
    }
    iDiff = iCountSmall - iCountCapital;
    return iDiff;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]s", Arr);

    iRet = Diffrence(Arr);

    printf("Diffrenece is :%d", iRet);

    return 0;
}; /*

 Case 1:

Enter the string:
omkar Durge
Diffrenece is :8

Case 2:
MarvellouS
Diffrenece is :6

 */
