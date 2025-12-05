//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strCpySmall
//  Description:    To make copy of the string in small letters in another string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////////////////////
void strCpySmall(char *src, char *dest)
{

    while (*src != '\0')
    {
        char temp = *src;
        if (temp >= 'A' && temp <= 'Z')
        {
            temp = temp + 32;
            *dest = temp;
        }
        else
        {

            *dest = *src;
        }
        src++;
        dest++;
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = "I AM BATMAN";
    char Brr[50] = {'\0'};

    strCpySmall(Arr, Brr);

    printf("Entered String:%s\n", Arr);

    printf("New String:%s\n", Brr);
    return 0;
}; /*

 Case 1:

Entered String:Marvellous Python
New String:marvellous python


Case 2:

Entered String:I AM BATMAN
New String:i am batman


 */
