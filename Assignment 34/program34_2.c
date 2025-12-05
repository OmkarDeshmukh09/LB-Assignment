//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    Display Small if character is capital
//                  Display capital if character is  Small
//  Input:          Character
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch);
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{

    char cValue = '\0';

    printf("Enter the Charcter  \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
/*

Case 1:

Enter the Charcter
a
A

Case 2:
Enter the Charcter
2
2

Case 3:
Enter the Charcter
Z
z


*/