//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strrevX
//  Description:    To reverse a string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           30/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void strrevX(char str[])
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {

        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
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

    printf("Entered String:%s\n", Arr);

    strrevX(Arr);

    printf("Updated String:%s\n", Arr);

    return 0;
}
/*

Output:

Enter the String:
omkaka
Entered String:omkaka
Updated String:akakmo


*/