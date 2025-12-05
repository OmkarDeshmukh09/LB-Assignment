//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    To display the octal and hexadecimal Value of given charcater
//  Input:          Character
//  Output:         
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void Display(char ch)
{   
    printf("Decimal:%d\n",ch);
    printf("Octal:%4o\n",ch);
    printf("Hexadecimal:%4x",ch);
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