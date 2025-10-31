#include <stdio.h>

int RangeSumEven(int iNo1, int iNo2)
{
    int iCnt = 0 , iSum = 0 ;

    if (iNo1 > iNo2 )
    {
        printf("Invalid Input");
    }    
    
    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++ )
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
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    printf("Enter Starting number : ");
    scanf("%d",&iValue1);
    
    printf("Enter Ending number : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("The Addition of Range of %d & %d is : %d",iValue1,iValue2,iRet);

    return 0 ;
}