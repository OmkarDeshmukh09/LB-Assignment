//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  strtogglex
//  Description:    To make the uppercase in lower and lower case in upper case
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void strtogglex(char str[])
{
  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
    }
    else if (*str >= 'A' && *str <= 'Z')
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

  strtogglex(Arr);

  printf("Updated String:%s", Arr);
  return 0;
}; /*

 Case 1:

Enter the String:
omKAR
Updated String:OMkar

Case 2:

Enter the String:
MARVELLOUS infosystem
Updated String:marvellous INFOSYSTEM

Case 3:

Enter the String:
JAY hanuman
Updated String:jay HANUMAN


 */
