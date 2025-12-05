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
//  Function Name:  ChkChar
//  Description:    To check that if character is present in the string or not
//  Input:          String,Character
//  Output:         BOOL
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
BOOL ChkChar(char str[], char ch)
{
    BOOL bflag = false;


    //Case Sensitive
    while (*str != '\0')
    {
        if (*str == ch)
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
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the String:\n");
    scanf(" %[^\n]s", Arr);

    printf("Enter the Character to check:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if (bRet == true)
    {
        printf("The character is present in the string..\n");
    }
    else
    {
        printf("The character is not present in the string..\n");
    }

    return 0;
}; /*

 Case 1:

Enter the String:
OMKAR DURGE
Enter the Character to check:
e
The character is present in the string..

Case 2:

Enter the String:
omkar
Enter the Character to check:
A
The character is present in the string..

Case 3:

Enter the String:
OMAU
Enter the Character to check:
d
The character is not present in the string..

 */
