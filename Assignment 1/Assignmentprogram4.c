//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : DivisiblityCheck
//  Discription   : It is used to perform Division by 5
//  Input  :        Integer , 2nd integer static
//  Output :        Integer
//  Author :        Omkar Balasaheb Deshmukh
//  Date   :        20/10/2025
//
//////////////////////////////////////////////////////////////////

bool DivisiblityCheck(int iNo)
{
    if(iNo < 0)                         //Updater
    {
        iNo = -iNo ;
    }

    if (( iNo % 5) == 0 )
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

//////////////////////////////////////////////////////////////////
//
//      ENTRY POINT FUNCTION FOR APPLICATION
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number ");
    scanf("%d",&iValue);

    bRet =DivisiblityCheck(iValue);

    if(bRet == true)
    {
        printf("Divisiable by 5 ");
    }
    else
    {
        printf("Not Divisiable by 5 ");
    }

    return 0 ;
}
//////////////////////////////////////////////////////////////////
//
//  Tastecases handelled sucessfully by application 
//
//  Input 1: 15      Input2 : 5        Output : Divisiable by 5
//  Input 1: 12      Input2 : 5        Output : Not Divisiable by 5
//  Input 1: -15     Input2 : 5        Output : Divisiable by 5
//  Input 1: -12     Input2 : 5        Output : Not Divisiable by 5
//
//////////////////////////////////////////////////////////////////