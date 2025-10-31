#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0 , iFactFreq = 0;

    for (iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if (iNo % iCnt == 0)
        {        
            iFactFreq ++;
        }
    }
    return iFactFreq;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet =CountFactors(iValue);

    printf("The total Factors are :%d",iRet);

    return 0 ;
}