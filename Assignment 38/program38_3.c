//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strCpyCap
//  Description:    To make copy of the string in Capital letters in another string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////////////////////
void strCpyCap(char *src, char *dest)
{

    while (*src != '\0')
    {
        char temp = *src;
        if (temp >= 'a' && temp <= 'z')
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
    char Arr[50] = "Marvellous Python";
    char Brr[50] = {'\0'};

    strCpyCap(Arr, Brr);

    printf("Entered String:%s\n", Arr);

    printf("New String:%s\n", Brr);
    return 0;
}; /*

 Case 1:

Entered String:Hello My Name is Omkar
New String:HELLO MY NAME IS OMKAR

Case 2:

Entered String:Marvellous Python
New String:MARVELLOUS PYTHON


 */
