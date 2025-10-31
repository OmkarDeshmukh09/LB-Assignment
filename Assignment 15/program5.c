#include<stdio.h>

int SumEvenOddDigits(int iNo)
{
    int iDigit = 0 , EvenFrequency = 0 , OddFrequency = 0 , iDiff = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10 ;

        if (iDigit % 2 == 0)
        {
            EvenFrequency = EvenFrequency + iDigit ;
        }
        else
        {
            OddFrequency = OddFrequency + iDigit ;
        }
        iDiff = EvenFrequency - OddFrequency ;
    }
    return iDiff ;
    
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = SumEvenOddDigits(iValue);

    printf("%d",iRet);

    return 0 ;
}