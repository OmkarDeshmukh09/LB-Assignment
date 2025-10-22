//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription   : It is used to print Hello if input is less than 10
//                  Andprint Demo if the input number is grater than 10
//  Input         : Integer
//  Output        : Hello or Demo
//  Author        : Omkar Balasaheb Deshmukh
//  Date          : 21/10/2025
//
//////////////////////////////////////////////////////////////////

void Display( int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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

    printf("Enter number");
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