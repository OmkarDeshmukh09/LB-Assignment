//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountCapital
//  Description:    To Count the Capital Letters in the String
//  Input:          String
//  Output:         int
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
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

    printf("Enter the string:\n");
    scanf("%[^\n]s", Arr);

    iRet = CountCapital(Arr);

    printf("%d", iRet);

    return 0;
}; /*

 Case 1:

Enter the string:
OMKAR DURGE
10

Case 2:
Enter the string:
omkar durge
0

Case 3:
Enter the string:
omkar DURGW
5
 */
