//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountWhite
//  Description:    To Counts the white spaces in the string
//  Input:          String
//  Output:
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           29/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountWhite(char str[])
{
  int iCount = 0;

  while (*str != '\0')
  {
    if (*str == ' ')
    {
      iCount++;
    }

    str++;
  }
  return iCount;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
  char Arr[50] = {'\0'};
  int iRet = 0;

  printf("Enter the String:\n");
  scanf(" %[^\n]s", Arr);

  iRet = CountWhite(Arr);

  printf("The count of white spaces in the string:%d\n", iRet);

  return 0;
}; /*

 Case 1:

Enter the String:
Hello Omkar
The count of white spaces in the string:1

Case 2:

Enter the String:
Hi my name is pavan
The count of white spaces in the string:4

Case 3:

Enter the String:
HELLO      OMKAR
The count of white spaces in the string:6

 */
