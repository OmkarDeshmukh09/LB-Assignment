//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strCpyX
//  Description:    To make copy of the string in another string without white spaces
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////////////////////
void strCpyX(char *src, char *dest)
{

    while (*src != '\0')
    {
        if (*src == ' ')
        {
            src++;
        }
        else
        {

            *dest = *src;
            src++;
            dest++;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = "Hello My Name is Omkar";
    char Brr[50] = {'\0'};

    strCpyX(Arr, Brr);

    printf("Entered String:%s\n", Arr);

    printf("New String:%s\n", Brr);
    return 0;
}; /*

 Case 1:

Entered String:Marvell ous
New String:Marvellous

Case 2:

Entered String:Hello My Name is Omkar
New String:HelloMyNameisOmkar


 */
