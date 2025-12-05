//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strCpyRev
//  Description:    To make copy of the string in reverse in another string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////////////////////
void strCpyRev(char *src, char *dest)
{
    char *temp = src;
    while (*src != '\0')
    {
        src++;
    }
    src--;

    while (src >= temp)
    {
        *dest = *src;
        src--;
        dest++;
    }
    src = temp;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = "Marvellous";
    char Brr[50] = {'\0'};

    strCpyRev(Arr, Brr);

    printf("Entered String:%s\n", Arr);

    printf("New Reversed String:%s\n", Brr);
    return 0;
}; /*

 Case 1:

Entered String:Marvellous Infosystem
New Reversed String:metsysofnI suollevraM

Case 2:

Entered String:Marvellous
New Reversed String:suollevraM

 */
