
#include<stdio.h>

int OddFactors(int iNo)
{
    int iCnt  = 0 ;
    int iFact = 1 ;

    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iNo >= iCnt ; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iFact = iFact * iCnt; 
        }
        
    }
    
    return iFact;

}

int main ()
{
    int iValue = 0 ,  iRet = 0 ;

    printf("Enter number to find even Factors ");
    scanf("%d",&iValue);

    iRet = OddFactors(iValue);

    printf("The even factors are : %d\t",iRet);

    return 0 ;
}