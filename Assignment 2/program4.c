//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>


//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print number multiple times
//  Input         : Two Integers (Number, Frequency)
//  Output        : Number printed 'Frequency' times
//  Author        : Omkar Balasaheb Deshmukh
//  Date          : 21/10/2025
//
//////////////////////////////////////////////////////////////////

int Display( int iNo, int iFrequency)
{
   if (iNo < 0)                                     //updater
   {
    iNo = -iNo;
   }
   for (int i = 0; i < iFrequency; i++)
    {
        printf("%d\t", iNo);
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
    int iCount = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
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