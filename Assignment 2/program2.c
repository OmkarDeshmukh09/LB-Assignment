//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription   : It is used to print ( * )
//  Input         : Integer
//  Output        : Sysmbol( * )
//  Author        : Omkar Balasaheb Deshmukh
//  Date          : 20/10/2025
//
//////////////////////////////////////////////////////////////////

void Display( int iNo)
{
    int iCnt = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > iCnt )
    {
        printf("    *   ");
        iNo--;
    }
}
//////////////////////////////////////////////////////////////////
//
//      ENTRY POINT FUNCTION FOR APPLICATION
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}

//////////////////////////////////////////////////////////////////
//
//  Tastecase handelled sucessfully by application 
//
//  Input : 5        Output :   *   *   *   *   *
//  Input : 4        Output :   *   *   *   *       
//  Input : 3        Output :   *   *   *       
//  Input : 2        Output :   *   *   
//                           
//////////////////////////////////////////////////////////////////