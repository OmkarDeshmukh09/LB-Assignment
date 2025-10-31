#include<stdio.h>

int PrintSumofEvenNumber(int iNo)
{
    int iCnt = 0 , iSum = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    for (iCnt = 1 ; iNo >= iCnt; iCnt++)
    {
        if(iCnt % 2 == 0)
        {    
            iSum = iSum + iCnt ;
        }
    }
    return iSum;
}

int main ()
{
    int iValueN = 0, iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValueN);

    iRet = PrintSumofEvenNumber(iValueN);

    printf("The Sum of All Natural Numbers is : %d",iRet);

    return 0;
}