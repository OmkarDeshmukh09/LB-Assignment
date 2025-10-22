//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription   : It is used to perform Pattern printing
//  Input  :        nos of stars wnat to display
//  Output :        pattern
//  Author :        Omkar Balasaheb Deshmukh
//  Date   :        21/10/2025
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0 ;

    //updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo )
    {
        printf("  *  ");
        iCnt++;
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

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Tastecase handelled sucessfully by application 
//
//  Input : 6        Output :   *   *   *   *   *   *
//  Input : 4        Output :   *   *   *   *       
//  Input : 1        Output :   *       
//  Input : 2        Output :   *   *   
//                           
//////////////////////////////////////////////////////////////////