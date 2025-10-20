/*
    Algorithm

    START
            First  number as iNo1
            Second number as ino2
            Perform the division of iNo1 & iNo2
            Dislpay the division on screen
    STOP
*/

//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Discription   : It is used to perform Division
//  Input         : integer , integer (Static input)
//  Output        : integer
//  Author        : Omkar Balasaheb Deshmukh
//  Date          : 20/10/2025
//
//////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if( iNo2 == 0 )
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;

}

//////////////////////////////////////////////////////////////////
//
//      ENTRY POINT FUNCTION FOR APPLICATION
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0 ;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0 ;
}

//////////////////////////////////////////////////////////////////
//
//  Tastecase handelled sucessfully by application 
//
//  Input 1: 15        Input2 : 5        Output : Division is 3
//
//////////////////////////////////////////////////////////////////