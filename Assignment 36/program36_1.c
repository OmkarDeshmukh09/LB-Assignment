//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strlwrx
//  Description:    To make the string in the lower case
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void strlwrx(char str[])
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
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

    printf("Enter the String:\n");
    scanf(" %[^\n]s", Arr);

    strlwrx(Arr);

    printf("Updated String:%s", Arr);
    return 0;
}; /*

 Case 1:

Enter the String:
OMMMSKSKS
Updated String:ommmsksks

Case 2:
Enter the String:
OMKAR DURGE
Updated String:omkar durge

Case 3:
Enter the String:
hello MARVELLOUS
Updated String:hello marvellous
 */
