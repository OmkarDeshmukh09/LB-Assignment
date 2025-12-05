//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigit
//  Description:    To Display the digits in the string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void DisplayDigit(char str[])
{

  while (*str != '\0')
  {
    if (*str >= '0' && *str <= '9')
    {
      printf("%c", *str);
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

  DisplayDigit(Arr);

  return 0;
}; /*

 Case 1:

Enter the String:
omkewh98707
98707

Case 2:

Enter the String:
MArvelloues 8wuei8
88

Case 3:

Enter the String:
OMKAR Durge1421
1421

 */
