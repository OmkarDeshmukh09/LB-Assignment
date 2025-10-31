#include<stdio.h>

int EvenSumCountFactors(int iNo)
{
    int iCnt = 0 , iFactSum = 0;
    if (iNo > 0)
    {
        
        for (iCnt = 1; iCnt < iNo ; iCnt++)
        {
            if( (iNo % iCnt == 0 ) && (iCnt % 2 == 0) )
            {        
                iFactSum = iFactSum + iCnt ;
            }
        }
        return iFactSum;
    }
    else
    {
        printf("Invalid Input");
        return 0 ;
    }
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet =EvenSumCountFactors(iValue);

    printf("TheSUm of total Factors is :%d",iRet);

    return 0 ;
}