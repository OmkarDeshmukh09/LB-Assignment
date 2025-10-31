#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0 , iCount = 0 ;

    if (iNo < 0 )
    {
        iNo = - iNo ;
    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        
        if(iDigit <= 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount ;
}

int main()
{
    int iValue = 0 , bRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);

    printf("%d",bRet);

    return 0 ;
}