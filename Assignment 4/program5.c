#include<stdio.h>

int FactDiff(int iNo)
{
    int iFact = 0 ;
    int iNonFact = 0 ;
    int iCnt = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo; // handle negative numbers
    }

    // Factors
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)         
    {
        if (iNo % iCnt == 0)
        {
            iFact = iFact + iCnt ;
        }
    }

    //NON-FACT
    for ( iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iNonFact = iNonFact + iCnt ;     
        }
    }

    return ( iNonFact - iFact );
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0 ;
}