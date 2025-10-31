#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0 , iMult = 1 ;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10 ;
        
        iMult = iMult * iDigit;
        
    }
    return iMult ;
    
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0 ;
}