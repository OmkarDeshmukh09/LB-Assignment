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

void Accept( int iNo)
{
    int iCnt = 0 ;

    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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
    iValue = 5 ; 

    printf("Enter number of stars you waant : ");
    scanf("%d",&iValue);

    Accept(iValue);

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