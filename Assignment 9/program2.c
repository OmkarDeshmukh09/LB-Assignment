#include<stdio.h>

int DollarToINR(int iNo)
{
    int rupeee = 0 ;
    if (iNo < 0 )
    {
        iNo = - iNo ;
    }
    
    rupeee = iNo * 70 ;
    
    return rupeee;
}

int main()
{
    int iValue = 0 ,iRet = 0 ;

    printf("Enter Numbber of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("The Value of INR is : %d",iRet);

    return 0 ;
}