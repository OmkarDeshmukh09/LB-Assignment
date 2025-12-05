//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountChar
//  Description:    To check the frequency of the chracter in the string
//  Input:          String,Character
//  Output:         int
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountChar(char str[], char ch)
{
    int iFrequncy = 0;
    char temp = ch;

    if (temp >= 'A' && temp <= 'Z')
    {
        temp = temp + 32;
    }
    //Case insensitive 
    while (*str != '\0')
    {
        char strCpy = *str;
        if (strCpy >= 'A' && strCpy <= 'Z')
        {
            strCpy = strCpy + 32;
        }

        if (strCpy == temp)
        {
            iFrequncy++;
        }
        str++;
    }
    return iFrequncy;
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

    iRet = CountChar(Arr, cValue);

    printf("Frequency of character is : %d\n", iRet);

    return 0;
}; /*

 Case 1:

Enter the String:
marvellous M
Enter the Character to check:
m
Frequency of character is : 2


Case 2:

Enter the String:
omkar durge
Enter the Character to check:
m
Frequency of character is : 1

Case 3:

Enter the String:
HELLO hemant
Enter the Character to check:
h
Frequency of character is : 2

 */
