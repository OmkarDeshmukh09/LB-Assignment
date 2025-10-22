//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription   : Accept number form user and check whether its even or odd
//  Input         : Integer, Integer
//  Output        : Integer
//  Author        : Omkar Balasaheb Deshmukh
//  Date          : 21/10/2025
//
//////////////////////////////////////////////////////////////////

bool CheckEvenOdd( int iNo)
{
    if ( (iNo % 2) == 0 )
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet  = false ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("The given number %d is Even ",iValue);
    }
    else
    {
      printf("The given number %d is Odd ",iValue);
    }
    

}

//////////////////////////////////////////////////////////////////
//
//  Tastecase handelled sucessfully by application 
//
//  Input : 6        Output : The given number 6 is Even  
//  Input : -4       Output : The given number -4 is Even         
//  Input : -3       Output : The given number -3 is Odd        
//  Input : 7        Output : The given number 7 is Odd     
//                           
//////////////////////////////////////////////////////////////////