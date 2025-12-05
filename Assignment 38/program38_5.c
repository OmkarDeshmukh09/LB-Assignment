//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strCpyToggle
//  Description:    To make copy of the string if small then Capital if Capital then
//                  small in another string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////////////////////
void strCpyToggle(char *src, char *dest)
{

    while (*src != '\0')
    {
        char temp = *src;
        if (temp >= 'A' && temp <= 'Z')
        {
            temp = temp + 32;
            *dest = temp;
        }
        else if (temp >= 'a' && temp <= 'z')
        {
            temp = temp - 32;
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
    char Arr[50] = "JAy SHRee Ram";
    char Brr[50] = {'\0'};

    strCpyToggle(Arr, Brr);

    printf("Entered String:%s\n", Arr);

    printf("New String:%s\n", Brr);
    return 0;
}; /*

 Case 1:

Entered String:I AM batman
New String:i am BATMAN


Case 2:

Entered String:JAy SHRee Ram
New String:jaY shrEE rAM


 */
