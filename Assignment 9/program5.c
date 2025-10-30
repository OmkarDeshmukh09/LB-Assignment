
#include<stdio.h>

int FactorsDifference(int iNo)
{
    int iCnt  = 0 ;
    int iFactEven = 1 ;
    int iFactOdd = 1 ;
    int iDiff = 0 ;

    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iNo >= iCnt ; iCnt++)        //Odd Factors
    {
        if (iCnt % 2 != 0)
        {
            iFactOdd = iFactOdd * iCnt; 
        }
        
    }

    for (iCnt = 1; iNo >= iCnt ; iCnt++)        //Even Factors
    {
        if (iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt; 
        }
        
    }
    iDiff = iFactOdd - iFactEven ;
    
    return iDiff;

}

int main ()
{
    int iValue = 0 ,  iRet = 0 ;

    printf("Enter number to find even Factors ");
    scanf("%d",&iValue);

    iRet = FactorsDifference(iValue);

    printf("The Difference of even factors & Odd factors are : %d\t",iRet);

    return 0 ;
}