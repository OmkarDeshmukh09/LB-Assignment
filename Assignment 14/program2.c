#include <stdio.h>
#include <stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0 ;

    if (iNo < 0)
    {
        iNo = - iNo;
    }
    if (iNo == 0)
    {
        printf("The Number itself is the zero");
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;

        if (iDigit == 0)
        {
            return true ;
        }
        iNo = iNo / 10 ;
    }
    return false ;
}

int main ()
{
    int iValue = 0 ;
    bool bRet  = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == true)
    {
        printf("It Cointains Zero");
    }
    else
    {
        printf("It Cointains Zero");
    }
    
    return 0 ;
}