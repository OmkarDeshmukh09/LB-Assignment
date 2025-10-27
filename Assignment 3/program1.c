//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>


//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print number even mumbers in times user provided
//  Input         : Integers
//  Output        : Even Number printed 
//  Author        : Omkar Balasaheb Deshmukh
//  Date          : 23/2025
//
//////////////////////////////////////////////////////////////////

int PrintEven( int iNo)
{
   if (iNo < 0)                                     //updater
   {
    iNo = -iNo;
   }

    for (int i = 1 ; i <= iNo ; i++)
    {
        printf("%d\t",2 * i);
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

    printf("Enter Number : ");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Tastecase handelled sucessfully by application 
//
//  Input : 5        Output :   0   2   4   6   8
//  Input : 4        Output :   0   2   4   6   
//  Input : -3        Output :   0   2   4       
//  Input : -2        Output :   0   2
//                           
//////////////////////////////////////////////////////////////////