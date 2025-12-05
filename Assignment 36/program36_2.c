//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  struprx
//  Description:    To make the string in the Upper case
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void struprx(char str[])
{
  while (*str!='\0')
  {
    if (*str>='a' && *str <= 'z')
    {
        *str=*str-32;
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

    struprx(Arr);

    printf("Updated String:%s", Arr);
    return 0;
}; /*

 Case 1:

Enter the String:
omkar
Updated String:OMKAR

Case 2:

Enter the String:
marvellous infosystem
Updated String:MARVELLOUS INFOSYSTEM

Case 3:

Enter the String:
jay shree ram
Updated String:JAY SHREE RAM
 */
